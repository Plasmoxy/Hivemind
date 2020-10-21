

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	
	int i, j;
	int *p_i, *p_j;

	p_i = &i;
	*p_i = 5;

	printf("Hodnota premennej i je : %d a jej adresa je %p\n", i, (void*) &i);
	printf("Hodnota premennej j je : %d a jej adresa je %p\n", j, (void*) &j);
	puts("");
	printf("Ukazovatel na i ma hodnotu: %p\n", (void*) p_i);
	printf("Ukazovatel na j ma hodnotu: %p\n", (void*) p_j);

	puts("");
	return 0;
}