
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	/*
	Zakladny typ pre pracu so suborom,
	-> typ FILE * (file pointer)
	*/

	FILE *fw;
	if ((fw = fopen("vystup.txt", "w")) == NULL) {
		puts("chyba vstupu");
		return 1;
	}

	for (int i = 0; i < 50; i++) {
		fprintf(fw, "%d\n", i);
	}

	fclose(fw);


	// citanie

	FILE *fr;
	if ((fr = fopen("vstup.txt", "r")) == NULL) {
		printf("Chyba pri nacitani.\n");
		return 1;
	}

	int n;
	fscanf(fr, "%d", &n);
	printf("n = %d\n", n);
	fclose(fr); // je dobre si zatvarat subory za sebou vzdy


	puts("=========== IPSUM =============");

	FILE *ipsum;
	if ((ipsum = fopen("ipsum.txt", "r")) == NULL) {
		printf("Chyba pri nacitani.\n");
		return 1;
	}

	printf("\nftell = %ld\n", ftell(ipsum));

	int c;
	while ((c = getc(ipsum)) != EOF) { // getc zobere jeden znak podla toho kde je kurzor
		putchar(c);
	}

	printf("\nftell = %ld\n", ftell(ipsum));

	// pretocim suborovy kurzor spat na zaciatok suboru
	fseek(ipsum, 0, SEEK_SET);

	// a mozem este raz vypisat
	int i = 3;
	while ((c = getc(ipsum)) != EOF) {
		if (c == 'a' && i-- > 0 ) ungetc(c, ipsum); // vrati znak do bufferu spat
		else i = 3;
		putchar(c);
	}

	if (fclose(ipsum) == EOF) {
		printf("Chyba pri zatvarani suboru.\n");
		return 1;
	}

	FILE *binarny = fopen("binarny.txt", "wb");
	for (int i = 97; i < 100; i++) {
		fwrite(&i, sizeof(int), 1, binarny);
	}
	fclose(binarny);


	// int feof(FILE* stream);
	// -> vyhodi 1 ak sme uz dosli na koniec suboru
	// takze ak je 0, mozeme citat.

	return 0;
}