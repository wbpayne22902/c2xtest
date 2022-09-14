// c2xtest Version 0.3
#include <stdio.h>
#include <stdlib.h>

int main() {
	int a = 0xFF'FF'FF'FF;
	printf("%#x\n", a);
#if defined(__APPLE__) || defined(__LINUX__)
	printf("UNIX!\n");
#endif
	return EXIT_SUCCESS;
}

