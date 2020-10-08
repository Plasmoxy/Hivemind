
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <assert.h>


/*
Seminar assert, rekurzia
*/

// fibbonaci rekurzia
// = neefektivne, lebo sa musia furt prepocitavat tie iste cisla
// je lepsie to vypocitat iterativne pomocou pola
int fib(int n) {
	if (n <= 1) {
		return n;
	}
	else {
		return fib(n-2) + fib(n-1);
	}
}


int main() {
	
	/*
	assert(x);
	x je podmienka, kde pisem veci ktore maju zbehnut dobre
	teda ak x je 0, assert crashne program a vypise riadok kde
	failla assertion.

	pozor treba <assert.h>

	ak zadefinujem #define NDEBUG, assercie sa vypnu !!!
	*/

	int n;
	printf("Daj cislo vacsie jak 10:\n");
	// scanf("%d", &n);
	// assert(n > 10); // yeet


	/*
	Rekurzia = funkcia, ktora vola samu seba.
	Ale musi niekedy skoncit! (musi tam byt podmienka).
	Rozdeli problem so vstupnymi datami na viac kusov toho isteho
	problemu ale s mensimi datami.
	Zlá charakteristika podmienky = vedie k nekoneènej rekurzii (stack overflow)

	Kazda rekurzia sa da vyjadrit v nerekurzivnom tvare (iterativne).
	*/

	printf("5 fibbonaciho cislo = %d\n", fib(5));


	/*	
	Podmienene breakpointy maju podobnu funkciu ako assert,
	ale odporuca sa radsej assert (s NDEBUG);
	*/



	return 0;
}