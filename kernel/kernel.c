#include "print.h"

void kernel_main() {
	clear_screen();

	print("ATHARVA");
	print_newline();
	print("------------------------------");
	print_newline();
	print("MyOS v1.0");
	print_newline();
	print("System Ready");
	print_newline();
	print("Booting..");

	while(1) {}
}	

