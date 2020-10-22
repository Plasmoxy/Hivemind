
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void increment(int* x) {
	(*x)++;
}

// function pointer
int reduce(int x, int (*f)(int*)) {
	return f(&x);
}

int main() {
	
	int a = 4;
	printf("new = %d\n", reduce(a, increment));

	return 0;
}