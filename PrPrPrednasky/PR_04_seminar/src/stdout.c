
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	
	/*
	V unixe je stdout bufferovany,
	stderr neni bufferovany.
	*/
	fprintf(stdout, "Yeeetstdout ");
	// fflush(stdout); // flushni buffer
	fprintf(stderr, "stderr ");
	fprintf(stdout, "Dalsi zapis stdount ");
	fprintf(stdout, "\n");

	return 0;
}