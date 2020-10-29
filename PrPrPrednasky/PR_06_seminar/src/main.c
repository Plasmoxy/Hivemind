
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h> // malloc, calloc, realloc
#include <string.h> // memset

/*
	Halda a dynamick� pam�.
*/

// custom free funkcia
void nullfree(void** ptr) {
	if (*ptr == NULL) return;
	free(*ptr);
	*ptr = NULL;
}

int main() {
	
	/*
	Polia - statick� a dynamick�
	statick� - na z�sobn�ku, ve�kos� v�dy kon�tantn� a nem��e sa meni�
	dynamick� - na halde, ve�kos� sa m��e meni� (cez realloc)
	*/

	// vytvori v pamati int pole o velkosti 4och intov
	int *cislo_pole = (int*) malloc(4 * sizeof(int));

	// vytvori v pamati vynulovane int pole
	int *vynulovane_pole = (int*) calloc(4, sizeof(int));

	for (int i = 0; i < 4; i++) {
		printf("%d ", vynulovane_pole[i]);
	}
	puts("");
	
	// WTF REALLOC ??????????
	// MSVC funguje inak ako GCC ??????????
	cislo_pole = (int*) realloc(cislo_pole, 16 * sizeof(int));
	

	for (int i = 0; i < 16; i++) {
		printf("%d ", cislo_pole[i]);
	}
	puts("");

	// uvolni pole v pamati
	// NIE VYMAZE/VYNULUJE, len uvolni
	// odporuca sa nastavit pointer na NULL ked dame free
	free(cislo_pole); cislo_pole = NULL;
	free(vynulovane_pole); vynulovane_pole = NULL;


	// memory leak detectory
	// vo VS by mal byt detektor, Valgrind, Doctormemory

	return 0;
}