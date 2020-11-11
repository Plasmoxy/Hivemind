

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

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

void pront(vec2 v) {
	printf("(%g, %g)\n", v.x, v.y);
}

vec2 add(vec2 a, vec2 b) {
	return 
}

int main(void) {
	
	int_array pole = calloc(10, sizeof(int*));

	struct clovek_t pavol = {130, 14};
	Clovek janko = {1, 3.14f};

	vec2 a = {1.5, 4.2}; // initializer list
	vec2 b = {24, 234.1};
	pront(a);
	pront(b);


	complex x;
	x.real = 4;
	x.imag = 10;

	// priame priradenie cez pretypovanie structu
	// neviem ci to je dobre nepouzivajte to radsej xdddd
	x = (complex) {13, 24}; 
	printf("x = %g %g", x.real, x.imag);



	return 0;
}