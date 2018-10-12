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

print('Generating test for Following Parameters: ')
print('Sets: '+str(sets))
print('Word_size: '+str(word_size))
print('Block_size: '+str(block_size))
print('Addr_width: '+str(addr_width))
ways=1



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

    

test1()
test2()
test3()
test4()
test5()
test6() 
write_to_file(0,read,nodelay,nofence)
gold_file.write(miss)
test_file.close()
gold_file.close()
