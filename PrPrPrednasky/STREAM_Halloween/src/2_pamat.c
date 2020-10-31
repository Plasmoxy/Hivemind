

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int add(int a, int b) {
	a += 4;
	return a + b;
}

void vymen(int a, int b) {
	int xdxdd = 10;

	int tmp = a;
	a = b;
	b = tmp;
}

void modifikuj(int* p) {
	*p = 50;
}

int* vytvor() {
	int *p_x;
	
	if ((p_x = calloc(1, sizeof(int))) == NULL) {
		puts("calloc err"); exit(3);
	}
	
	*p_x = 5;
	return p_x;
}

int main(void) {

	/* - kompilovanie na assembly, pamatove regiony, segmentation fault */

	char *ahoj = "KYSKYSKYSKKYSKY"; // literal, konštanta
	// 3, 3.0, 3.0f, 230920424L
	float pi = 3.14159f;

	/* - premenne, konstanty (1.0f, 1.0, 1L), typy premennych, definicia/deklaracia/predpis, modifikatory unsigned/signed long/short */

	// int, double, float, long, char = 1B
	//char cr = 'A';
	//char schar = -80; // -127 .. +127 ~~~
	//unsigned char us = 144; // 0 .. 255 ~~~

	//int a;
	//unsigned int t = 120910381;


	//unsigned char agresia = 0;
	//agresia -= 2;

	//printf("%d\n", agresia);

	/* - Funkcie,  stack frame, scope, globalne premenne */

	//int a;
	//// sizeof(int) ~ 4, sizeof a ~ 4;
	//a = 4;

	//int b = 5;

	//int c = add(a, b);

	//int m = 5, n = 10;
	//vymen(m, n);

	//printf("%d %d\n", m, n);

	/* - -> zivotnost vo svojom scope/stack frame !!!! */
	/* premenna zanikne po skoneceni funkcie v ktorej
	bola definovana */

	/* - Pointery base (na data) + scanf + subory, fseek, rewind, EOF */

	int *p;
	int *n, *t; // dva pointery

	int cislo = 5;
	p = &cislo; // & - referecny operator

	// * - dereferencny operator
	// (*p) <=> cislo
	*p = 6;
	int hodnota_premennej = *p;

	// - typy pointerov
	int *pointer_na_int;
	double *pointer_na_double;
	char *poiner_na_char;

	int **dp; // dp -> p -> cislo
	dp = &p;

	// *dp <=> p
	// **dp <=> cislo

	**dp = 17;

	modifikuj(&cislo);

	// int* = &int
	// *(int*) = int
	// &(int*) = int**

	// - vplyv pointeru na stack frame a parametre

	// - function pointer, function declaration vs f. pointer
	
	/* Dynamicka alokacia pamate - halda/heap,  */

	int* ptr_x = vytvor();
	int b = 6;
	int a = b + 65;
	printf("a = %d\n", a);
	printf("ptr_x -> %d\n", *ptr_x);

	free(ptr_x); ptr_x = NULL;


	/* stdlib.h */

	/* void *malloc(size_t n) */
	/* void *calloc(size_t n,size_t size_item) */
	/* - overovanie, ci alloc pridelil spravne pointer (cez priradovaci vyraz) */

	/* uvolnovanie pamate na heape / stacku, memory leaks, NIE VYMAZANIE ale uvolnenie */

	/* void *realloc(void *ptr,size_t size); */

	/* void *memset(void *ptr,int value,size_t num); */

	/* stringy xdxddd */

	// staticke pole = na zasobniku
	// int pole[5] = {0};
	int pole[5] = {1, 2, 3, 4, 5};

	// "pole" je pointer na prvy prvok pola !!!
	printf("a = %p\n", pole);

	// pointer aritmetika
	// pole[0] == *(pole)
	// pole[1] == *(pole + 1)

	pole[1] = 10;
	*(pole + 1) = 10;

	puts("pole:");
	for (int i = 0; i < 5; i++) {
		printf("%d ", pole[i]);
	}
	puts("");

	// dynamicke
	int velkost = 10;
	int *dpole = malloc(sizeof(int) * velkost);
	free(dpole); dpole = NULL;

	dpole = calloc(velkost, sizeof(int));

	dpole[0] = 99;
	dpole[1] = 999;
	*(dpole + 2) = 9999;

	puts("dpole:");
	for (int i = 0; i < velkost; i++) {
		printf("%d ", dpole[i]);
	}
	puts("");

	// stringy
	// string = pole znakov + '\0'
	// '\0' = terminator = nulovy znak

	char *s = "AHOJ"; // sizeof s = sizeof(char) * 5

	char ss[50]; // 49 pismen + 1 nulovy znak
	// fgets(ss, 50 - 1, stdin);
	// gets(ss, 50 - 1);

	// printf("string moj = %s\n", ss);

	// Dynamicke pole 5 stringov
	// pole char pointerov
	int mz = 50;
	char **pole_stringov = calloc(5, sizeof(char*));
	/*for (int i = 0; i < 5; i++) {
		printf("%d. ", i);
		pole_stringov[i] = calloc(mz, sizeof(char));
		fgets(pole_stringov[i], mz - 1, stdin);
		puts("");
	}*/


	/*for (int i = 0; i < 5; i++) {
		printf("%s\n", pole_stringov[i]);
	}*/

	// retard string
	char *retard = malloc(4 * sizeof(char));
	retard[0] = 'A';
	retard[1] = 'B';
	retard[2] = 'C';
	retard[3] = 'H';



	printf("retard = %s\n", retard);
}