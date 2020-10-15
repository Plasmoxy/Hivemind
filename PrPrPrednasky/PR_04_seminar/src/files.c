
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	/*
	Citanie a zapisovanie naraz
	*/

	// toto na 100% vypise do suboru tu jednotku po skonceni fflush
	FILE* f = fopen("xdd.dat", "wb+"); // + zapne aj citanie
									   
	int i = 1;
	fwrite(&i, sizeof(int), 1, f);
	i++;
	fwrite(&i, sizeof(int), 1, f);
	i++;
	fwrite(&i, sizeof(int), 1, f);
	fflush(f);



	fclose(f);
	return 0;
}



