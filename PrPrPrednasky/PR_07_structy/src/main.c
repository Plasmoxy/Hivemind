

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// vlastny datovy typ
typedef int** int_array;

// blby sposob
/*
struct clovek_t {
	int vyska;
	float vaha;
};
*/

// universal sposob
typedef struct clovek_t {
	int vyska;
	double vaha;
} Clovek;

typedef struct vec2_t {
	double x;
	double y;
} vec2;


typedef struct complex_t {
	double real;
	double imag;
} complex;

complex* new_complex(double real, double imag) {
	complex *p = malloc(sizeof(complex));
	if (!p) exit(10);
	*p = (complex) { real, imag };
	return p;
}


typedef enum {
	false, true
} boolean;

void pront(vec2 v) {
	printf("(%g, %g)\n", v.x, v.y);
}

vec2 add(vec2 a, vec2 b) {
	return (vec2) {a.x + b.x, a.y + b.y}; // C99
}

double dot(vec2 a, vec2 b) {
	return a.x * b.x + a.y * b.y;
}

Clovek* new_clovek(int vyska, double vaha) {
	Clovek *p = NULL;
	p = malloc(sizeof(Clovek));
	p->vyska = vyska;
	p->vaha = vaha;
	return p;
}

typedef enum {
	MODRA, CERVENA, ZELENA, ZLTA
} FARBY;

void pront_farba(FARBY f) {
	printf("farba -> %d\n", f);
}

int main(void) {
	
	int_array pole = calloc(10, sizeof(int*));

	struct clovek_t pavol = {130, 14};
	Clovek janko = {1, 3.14f};

	vec2 a = {1.5, 4.2}; // initializer list
	vec2 b = {24, 234.1};
	pront(a);
	pront(b);
	puts("Suma:");
	pront(add(a, b));
	printf("dot: %.10g\n", dot(a, b));


	complex x;
	x.real = 4;
	x.imag = 10;

	// priame priradenie cez pretypovanie structu
	// neviem ci to je dobre nepouzivajte to radsej xdddd
	x = (complex) {13, 24}; // C99
	printf("x = %g %g\n", x.real, x.imag);

	Clovek *jano = new_clovek(13, 12);
	pront_farba(ZLTA);


	complex *cpa = new_complex(1, 2);
	complex *cpb = new_complex(4, 12);

	boolean t = false;
	boolean j = true;

	free(cpa);
	free(cpb);
	return 0;
}