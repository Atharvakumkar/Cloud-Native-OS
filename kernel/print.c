#include "print.h"

unsigned char *vga = (unsigned char *)0xB8000; 
int cursor = 0;

void clear_screen() {
	for (int i = 0; i < 80 * 25 * 2; i++) {
		vga[i] = 0;
	}
	cursor = 0;
}

void print(const char *str) {
	int i = 0;
	while (str[i] != '\0') {
		vga[cursor] = str[i];
		vga[cursor + 1] = 0x0F;
		cursor += 2;	
		i++;
	}
}

void print_newline() {
	int col = (cursor / 2) % 80;
	cursor += (80 - col) * 2;
}
