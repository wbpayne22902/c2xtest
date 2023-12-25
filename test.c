// c2xtest Version 0.4
// Copyright 2022-2023 Wilhelm Payne
#include <stdio.h>
#include <stdlib.h>

int main() {
	int a = 0xFF'FF'FF'FF;
	printf("%#x\n", a);
#if defined(__APPLE__) || defined(__linux__)
	printf("UNIX!\n");
#endif
	return EXIT_SUCCESS;
}

