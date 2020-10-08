#include <stdio.h>

int main() {
	/*
	Ak pisem prikazy do mnozinovych zatvoriek, je to blok kodu.
	*/

	{
		int j = 30;
	}

	// printf("%d\n", j) // nefunguje, pretoze blok v ktorom je "j" deklarovane
	// nie je rovnaky alebo nadradeny bloku kde je printf

	// blok vytvara svoj vlastny scope a vsetky premenne definovane v tomto scope su pristupne aj v scopoch podradenych tomuto scopu

	// j je lokalna premenna
	// nepouzivajte globalne premenne

	// scopy sa vytvaraju aj ked pouzijem for/if/while/...

}