
set -euo pipefail

rm -f q3 q3.o syscall.o basicIO.o


nasm -f elf64 syscall.S -o syscall.o


g++ -c src/basicIO.cpp -Iinclude -o basicIO.o \
    -ffreestanding -fno-exceptions -fno-rtti -fno-stack-protector -fno-builtin -nostdlib

g++ -c q3.cpp -Iinclude -o q3.o \
    -ffreestanding -fno-exceptions -fno-rtti -fno-stack-protector -fno-builtin -nostdlib

ld -o q3 syscall.o basicIO.o q3.o

echo "Built ./q3 successfully. Run ./q3 to test."
