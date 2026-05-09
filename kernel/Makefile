all: kernel.bin

boot.o:
	nasm -f elf32 boot.asm -o boot.o

print.o:
	gcc -m32 -ffreestanding -fno-builtin -nostdlib -c print.c -o print.o

kernel.o:
	gcc -m32 -ffreestanding -fno-builtin -nostdlib -c kernel.c -o kernel.o

kernel.bin: boot.o print.o kernel.o
	ld -m elf_i386 -T link.ld -o kernel.bin boot.o kernel.o print.o

clean:
	rm -f *.o *.bin
