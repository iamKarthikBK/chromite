import os
import sys
import math

# parameters:

tbfile=open('icache_tb.bsv','r')

for lineno,line in enumerate(tbfile):
    if '`define' in line:
      if 'sets' in line:
        line=line.split()
        sets=int(line[2])
      if 'word_size' in line:
        line=line.split()
        word_size=int(line[2])
      if 'block_size' in line:
        line=line.split()
        block_size=int(line[2])
      if 'addr_width' in line:
        line=line.split()
        addr_width=int(line[2])
      if 'ways' in line:
        line=line.split()
        ways=int(line[2])

print('Generating test for Following Parameters: ')
print('Sets: '+str(sets))
print('Ways: '+str(ways))
print('Word_size: '+str(word_size))
print('Block_size: '+str(block_size))
print('Addr_width: '+str(addr_width))



# globals:
read='read'
write='write'
delay='delay'
nodelay='nodelay'
fence='fence'
nofence='nofence'
nibbles=int(math.ceil((addr_width+4)/4))
test_file=open('test.mem','w')
gold_file=open('gold.mem','w')
miss='0\n'
hit='1\n'

def write_to_file(addr,readwrite, delaycycle, fencecycle):

    if readwrite == 'read':
      rw=0b0
    else:
      rw=0b1

    if delaycycle == 'delay':
      d=0b1
    else:
      d=0b0

    if fencecycle == 'fence':
      f=0b1
    else:
      f=0b0
    # test format:
    # read/write : delay/nodelay : Fence/noFence : Null : Addr
    upperbits=((rw<<3) | (d<<2) | (f<<1) | 0b0)
    s = str(hex(addr| (upperbits<<addr_width) ))
    test_file.write(s[2:].zfill(nibbles)+'\n')
    return 0



# this test will generate consecutive requests on the same line.
# each request will be a miss in the cache and probably a hit a in the Line
# buffer if present.
def test1():
    address=4096
    for i in range(block_size):
      write_to_file(address,read,nodelay,nofence)
      if i == 0:
        gold_file.write(miss)
      else:
        gold_file.write(hit)
      address=address+word_size
    
    return 0

# This test will generate consecutive requests to different sets of the cache
# All should be a cold miss
def test2():
    write_to_file(0,read,nodelay,fence)
    gold_file.write(miss)
    address=4096
    
    for i in range(sets):
      write_to_file(address,read,nodelay,nofence)
      gold_file.write(miss)
      address=address+(word_size*block_size)

# This test will first fill a line and then generate a request on the same line
# after significant delay.
def test3():
    write_to_file(0,read,nodelay,fence)
    gold_file.write(miss)

    address=4096
    write_to_file(address,read,nodelay,nofence)
    gold_file.write(miss)

    address=address+4
    write_to_file(address,read,nodelay,nofence)
    gold_file.write(hit)

    for i in range(20):
      write_to_file(address,read,delay,nofence)
      gold_file.write(miss)

    address=4096
    write_to_file(address,read,nodelay,nofence)
    gold_file.write(hit)

# This test will first fill a line and after significant delay fill up the
# next line and immediately generate a request for the first line that was
# filled.
def test4():
    write_to_file(0,read,nodelay,fence)
    gold_file.write(miss)

    address=4096
    write_to_file(address,read,nodelay,nofence)
    gold_file.write(miss)
    
    for i in range(20):
      write_to_file(address,read,delay,nofence)
      gold_file.write(miss)
  
    address=address+(word_size*block_size)
    write_to_file(address,read,nodelay,nofence)
    gold_file.write(miss)
    
    address=4096
    write_to_file(address,read,nodelay,nofence)
    gold_file.write(hit)
   
# This test will first fill a line. After significant delay it will then
# generate a request for all words within the same line. They should all be hits
# in the cache.
def test5():
    
    write_to_file(0,read,nodelay,fence)
    gold_file.write(miss)

    address=4096
    write_to_file(address,read,nodelay,nofence)
    gold_file.write(miss)
    
    for i in range(20):
      write_to_file(address,read,delay,nofence)
      gold_file.write(miss)
  
    for i in range(block_size):
      write_to_file(address,read,nodelay,nofence)
      gold_file.write(hit)
      address=address+word_size

# this test will generate a cache request and then a IO request
def test6():
    write_to_file(0,read,nodelay,fence)
    gold_file.write(miss)

    address=4096
    write_to_file(address,read,nodelay,nofence)
    gold_file.write(miss)

    address=32
    write_to_file(address,read,nodelay,nofence)
    gold_file.write(miss)
    
    address=4096
    write_to_file(address,read,nodelay,nofence)
    gold_file.write(hit)

def test7():
  
    write_to_file(0,read,nodelay,fence)
    gold_file.write(miss)

    address=4096
    write_to_file(address,read,nodelay,nofence)
    gold_file.write(miss)

    for i in range(20):
      write_to_file(address,read,delay,nofence)
      gold_file.write(miss)
  
    address=address+(word_size*block_size)
    write_to_file(address,read,nodelay,nofence)
    gold_file.write(miss)

    address=4100
    write_to_file(address,read,nodelay,nofence)
    gold_file.write(hit)

# the following test will create a scenario where a LB miss and Cache miss will
# occur for different addresses (cache array output is registered
def test8():

    write_to_file(0,read,nodelay,fence)
    gold_file.write(miss)

    address=4096
    write_to_file(address,read,nodelay,nofence)
    gold_file.write(miss)

    for i in range(8):
      write_to_file(address,read,delay,nofence)
      gold_file.write(miss)
  
    address=4096
    write_to_file(address,read,nodelay,nofence)
    gold_file.write(hit)

    address=address+(word_size*block_size)
    write_to_file(address,read,nodelay,nofence)
    gold_file.write(miss)

# this test creates a thrashing scenario on the same set. Total requests =
# 2*ways
def test9():
    
    write_to_file(0,read,nodelay,fence)
    gold_file.write(miss)

    address=4096
    for i in range(ways+ways+ways+1):
      write_to_file(address,read,nodelay,nofence)
      gold_file.write(miss)
      address=address+(word_size*block_size*sets)



# first fill a set completely. Then access the lines in that set from line 0 to 3.
# Then generate 2 misses to that set.
# This test to assess how PLRU is affected by hits before generating those misses.
# RR wont have an effect because of the hits.
# gold file w.r.t PLRU
def test10():

    write_to_file(0,read,nodelay,fence)
    gold_file.write(miss)

    address=4096
    for i in range(ways):
        write_to_file(address,read,nodelay,nofence)
        gold_file.write(miss)
        address=address+(word_size*block_size*sets)

    address=4096+(word_size*block_size) # a miss to fully fill the set
    write_to_file(address,read,nodelay,nofence)
    gold_file.write(miss)

    address=4096 # accessing lines from 0 to 3
    address=address+(word_size*block_size*sets*(ways-1)) # this would set next_repl to be line 0
    for i in range(ways): 
        write_to_file(address,read,nodelay,nofence)
        gold_file.write(hit)
        address=address-(word_size*block_size*sets)
        
    address=4096
    address=address+(word_size*block_size*sets*(ways)) # miss to the set, would replace line 0 and set next_repl to line 2
    write_to_file(address,read,nodelay,nofence)
    gold_file.write(miss)

    address=address+(word_size*block_size*sets) # another miss to the set, would replace line 2
    write_to_file(address,read,nodelay,nofence)
    gold_file.write(miss)

    address=4096+(word_size*block_size*2) # miss to a different set to write back lb contents, line 0 and 2 get replaced
    write_to_file(address,read,nodelay,nofence)
    gold_file.write(miss)
    
    address=4096+(word_size*block_size*sets) # request to old line 2, should be a miss
    write_to_file(address,read,nodelay,nofence)
    gold_file.write(miss)

    address=4096+(word_size*block_size*sets*(ways-1)) # request to old line 0, should be a miss 
    write_to_file(address,read,nodelay,nofence)
    gold_file.write(miss)



## test consists of combination of misses and hits and then requesting certain lines.
# gives better understanding of PLRU policy in a sense as how hits between misses changes next replacement line.
# gold file w.r.t PLRU
def test11():
   
    write_to_file(0,read,nodelay,fence)
    gold_file.write(miss)

    address=4096
    for i in range(ways+1): #  1st miss after filling the set would replace line 3, next_repl would be set to line 0 
        write_to_file(address,read,nodelay,nofence)
        gold_file.write(miss)
        address=address+(word_size*block_size*sets)

    address=4096
    address=address+(word_size*block_size) # miss (to a diff set) to actually replace line 3 (needed due to lazy write back)
    write_to_file(address,read,nodelay,nofence)
    gold_file.write(miss)

    address=4096+(word_size*block_size*sets*2) # Req for line 1(2000) is hit, would set next_repl as line2
    write_to_file(address,read,nodelay,nofence)
    gold_file.write(hit)

    address=4096+(word_size*block_size*sets*5) # miss to that set would replace line 2
    write_to_file(address,read,nodelay,nofence)
    gold_file.write(miss)

    address=4096+(word_size*block_size*2) # miss(to diff set) for lb to update cache and actually replace line 2
    write_to_file(address,read,nodelay,nofence)
    gold_file.write(miss)

    address=4096+(word_size*block_size*sets) # request to line 2 (addr-1800) would be a miss
    write_to_file(address,read,nodelay,nofence)
    gold_file.write(miss)



# fill a set completely, generate a miss (line 3 would be taken) but prevent lb writing back to cache.
# generate requests to line 3 which would be hits, they would change next_repl lines.
# genertate miss (to a diff set), it would replace line 3 as lb already had next_repl as line 3,
# even though there were hits for line 3.
# gold file w.r.t PLRU

def test12():

    write_to_file(0,read,nodelay,fence)
    gold_file.write(miss)

    address=4096
    for i in range(ways+1): # filling set completely + generating a miss
        write_to_file(address,read,nodelay,nofence)
        gold_file.write(miss)
        address=address+(word_size*block_size*sets)

    address=4096 # 2 hits to line 3
    write_to_file(address,read,nodelay,nofence)
    gold_file.write(hit)
    write_to_file(address,read,nodelay,nofence)
    gold_file.write(hit)

    address=4096+(word_size*block_size) # miss to make lb write back to cache
    write_to_file(address,read,nodelay,nofence)
    gold_file.write(miss)

    address=4096 # request to old line 3
    write_to_file(address,read,nodelay,nofence)
    gold_file.write(miss)


# fill the set completely, req line 3(a hit), generate 2 misses, request line 3 again
# this line 3 request should be a hit for PLRU and miss for RROBIN
# gold file w.r.t RROBIN

def test13():

    write_to_file(0,read,nodelay,fence)
    gold_file.write(miss)

    address=4096
    for i in range(ways):
        write_to_file(address,read,nodelay,nofence)
        gold_file.write(miss)
        address=address+(word_size*block_size*sets)
   
    
    address=4096+(word_size*block_size) # miss lb to write back to cache 
    write_to_file(address,read,nodelay,nofence)
    gold_file.write(miss)

    address=4096
    write_to_file(address,read,nodelay,nofence) #request to line 3
    gold_file.write(hit)

    address=4096+(word_size*block_size*sets*4) # 1st miss
    write_to_file(address,read,nodelay,nofence)
    gold_file.write(miss)

    address=4096+(word_size*block_size*sets*5) # 2nd miss
    write_to_file(address,read,nodelay,nofence)
    gold_file.write(miss)

    address=4096
    write_to_file(address,read,nodelay,nofence) # request to old line 3
    gold_file.write(miss)





#test1()
#test2()
#test3()
#test4()
#test5()
#test6() 
#test7()
#test8()
#test9()
test10()
test11()
test12()
#test13()
write_to_file(0,read,nodelay,nofence)
gold_file.write(miss)
test_file.close()
gold_file.close()
