#!/bin/bash

LOG="/root/chromite/log$1"
touch $LOG
echo 'START' > $LOG

cd /root/New/chromite/

CONFIG="config$1"

python -m configure.main -ispec $CONFIG/c64/rv64i_isa.yaml -customspec $CONFIG/c64/rv64i_custom.yaml -cspec $CONFIG/c64/core64.yaml -gspec $CONFIG/c64/csr_grouping64.yaml --verbose debug

make -j$(nproc)
make link_verilator -j12
make generate_boot_files -j12

zip -rv config$1_build build

cat ../template.c ../matmult-int.c > benchmarks/hello/hello.c
echo "Hello World"
make hello
cat bin/app_log >> $LOG

cat ../template.c ../matmult-int.c > benchmarks/hello/hello.c
echo "MATMULT-INT"
make hello
cat bin/app_log >> $LOG

cat ../template.c ../minver.c > benchmarks/hello/hello.c
echo "MINVER"
make hello 
cat bin/app_log | tail -2 >> $LOG

cat ../template.c ../aha-mont64.c > benchmarks/hello/hello.c
echo "MONT64"
make hello
cat bin/app_log >> $LOG

cat ../template.c ../crc32.c > benchmarks/hello/hello.c
echo "CRC32"
make hello 
cat bin/app_log >> $LOG

cat ../template.c ../aes.c > benchmarks/hello/hello.c
echo "AES256"
make hello 
cat bin/app_log >> $LOG

echo "DONE"
