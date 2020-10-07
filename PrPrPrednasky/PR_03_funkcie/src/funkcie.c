#include <stdio.h>

#define _CRT_SECURE_NO_WARNINGS


/*
navratovytyp meno(argumenty)

typ void = nic

void vypis(); -> nema ziadnu navratovu hodnotu, nic nevracia
*/
int sucet(int a, int b) {
	return a + b;
}

int maximum(int a, int b) {
	return a > b ? a : b;
}

int main(void) {

	/*
	Funkcie - umoznuju rozdelenie problemu na podproblemy
	Fcia je logicky samostatna cast programu (podprogram), ktora
	berie nejaky vstup a vrati nejaky vystup.


	*/

	int vysledok = sucet(1, 2); // 3

	printf("max %d\n", maximum(4, 12));


	/*
	Prototyp funkcie = ak chces zavolat funkciu, musi byt definovana.
	Pomocou prototypu mozes deklarovat funkciu, potom ju pouzit, a zadefinovat
	ju neskor.
	*/

	return 0;
}