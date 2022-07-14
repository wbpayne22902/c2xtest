#include <stdio.h>

int main() {
	int a = 0xFF'FF'FF'FF;
	printf("%#x\n", a);
#if defined(__APPLE__) || defined(__LINUX__)
	printf("UNIX!\n");
#endif
	return 0;
}

