

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


double* porovnaj(double* x, double* y) {
	if (*x > *y) return x;
	else return y;
}

int main() {
	
	/*
	ukazovatele: 1. na dáta, 2. na funkciu
	*/

	int i = -10;
	int *p_i = &i;
	*p_i = 10;

	// dolezite zatvorky, inak by to bolo
	// double** porovnaj_p(double*, double*);
	// -> co je definicia funkcie a nie deklaracie function pointera
	double* (*porovnaj_p)(double*, double*) = porovnaj;

	double x = 4.0, y = 5.0;
	double *vysledok = porovnaj_p(&x, &y);

	printf("vysledok = %lf\n", *vysledok);

	return 0;
}