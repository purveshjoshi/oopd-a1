
set -euo pipefail

rm -f q2 q2.o syscall.o


nasm -f elf64 syscall.S -o syscall.o


g++ -c q2.cpp -o q2.o \
    -ffreestanding -fno-exceptions -fno-rtti -fno-stack-protector -fno-builtin -nostdlib

ld -o q2 syscall.o q2.o

echo "Built ./q2 successfully. Run ./q2; echo \$? to check return code."

