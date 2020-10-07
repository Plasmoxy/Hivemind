#include <stdio.h>

#define _CRT_SECURE_NO_WARNINGS

int main() {
	
	/*
	modulo = zvysok po celociselnom deleni
	( a % b )
	*/

	int a = 5%2; // 1

	/*
	prefix a postfix ++ aleebo --
	*/

	int x = 0;
	int y = ++x; // y = 1 (priradi sa po vyhodnoteni ++)

	x = 0;
	y = x++; // y = 0 (priradi sa pred vyhodnotenim ++)



	return 0;
}