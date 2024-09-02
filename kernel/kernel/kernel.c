#include <stdio.h>

#include <kernel/tty.h>

void kinit(void) {
	terminal_initialize();
	printd("testinf printd");
}
