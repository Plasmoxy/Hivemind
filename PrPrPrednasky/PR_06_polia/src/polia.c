
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define N 10

int main() {

	/*
	Opakovanie:
	Pamat pre aplikaciu:
	Instrukcie
	Staticke data - staticky alokovana pamat
	Zasobnik (stack) - skor dynamicka nez staticka alokacia
	Halda (heap) - dynamicka alokacia
	*/

	// -> dynamicky alokovane premenne cez malloc+free

	// globalne premenne - staticka alokacia

	// pole ...

	int n = 4;

	// ->          velkost pola musi byt konstanta
	// int pole_zle[n] = {1, 2, 3, 4};

	int pole[N];


	int a[3] = {1, 2, 3};
	int b[3] = {0}; // inicializuje vsetko na 0


	a[0] = 4;

	printf("a = ");
	for (int i = 0; i < 3; i++) {
		printf("%d ", a[i]);
	}
	puts("");



	return 0;
}