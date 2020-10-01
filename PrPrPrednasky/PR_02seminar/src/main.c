/*
	Bobak prednaska 2 -> seminar [30.09.2020] 
	Sebastián Petrík  github.com/Plasmoxy
	MSVC VS2019
*/

/*
	GCC warningy, bude odporucat ked daco je blbe napisane
	-Wall prepinac (-W all  ~ warnings all)

	- pozor na n=0 vs n==0,
	  -> prve je priradenie a vyskoci z toho hodnota, ktora bola priradena
	  -> druhe je logicky vyraz
	  -> taze nepouzivaj = v if/while, ked nevies presne ze chces vyuzit hodnotu priradenia


*/
#define _CRT_SECURE_NO_WARNINGS
#define f_cykly main

#include <stdio.h>

int f_cykly(void) {

	
	/*
	for (init; podmienka; prikaz) {}
	init - initializujeme premennu (bud deklarujeme, alebo jej len priradime
			zaciatocnu hodnotu
	podmienka - tu napisem logicky vyraz, ktory sa vzdy kazdu iteraciu vyhodnoti aak bude nenulovy (teda true), cyklus sa znova spusti
	prikaz - tu napisem prikaz ktory sa spusti na konci kazdej iteracie
	*/

	// odpocitavanie
	for (int i = 10; i > 0; i--) {
		printf("%d ", i);
	}
	printf("\n");


	/*
	while(podmienka) {...}
	*/

	int t = 0;
	while (t < 10) {
		printf("%d ", t++);
	}
	printf("\n");
	

	/*
	break - vyskoci z najblizsieho vnoreneho cyklu
	continue - okamzite ukonci aktualnu iteraciu najblizsieho vnoreneho cyklu a spusti dalsiu iteraciu (preskoci zvysok kodu za continue)
	*/
	int m = 0;
	while(1) {
		printf("%d ", m);
		if (m >= 10) break;
		m++;
	}
	printf("\n\n");

	/*
		vnorene cykly - sachovnica
	*/

	int N = 10;

	// i = riadok, j = stlpec
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			printf("%s", (i + j)%2==0 ? "O " : "  ");
		}
		printf("\n");
	}

	return 0;
}