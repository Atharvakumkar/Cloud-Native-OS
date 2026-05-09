FROM ubuntu:22.04

ENV DEBIAN_FRONTEND=noninteractive

RUN apt-get update && apt-get install -y \
	build-essential \
	nasm \
	qemu-system-x86 \
	grub-pc-bin \
	grub-common \
	xorriso \
	mtools \
	&& rm -rf /var/lib/apt/lists/*

WORKDIR /myos

COPY . .

RUN cd kernel && make clean && make

RUN cp kernel/kernel.bin iso/boot/kernel.bin && \ 
	grub-mkrescue -o myos.iso iso/

CMD ["echo", "MyOS build complete. ISO ready at /myos/myos.iso"]
