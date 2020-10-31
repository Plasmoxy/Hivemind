
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	int i;

	/* -1. Warning - nie som nejak extra pro C programmer; takto tomu chapem ~~ */



	/* - Jazyk C, proceduralny, standard = C90 = C89 = ANSI C */



	/* - premenna, funkcia vieme */



	/* - Vyrazy a prikazy, priradenie =, pretypovanie, implicitne pretypovanie */

	/*int a = 2;
	double b = 3.4;

	double c = a/b;

	printf("%lf\n", c);*/

	/* - Boolovske vyrazy, stdbool.h od C99, boolean operatory, nenulovost = true */

	/*int a = 3 && 0;
	printf("%d\n", a);*/

	/*int a = 10;

	if (a != 0) {

	}*/

	/* - stdio.h - puts, getchar, putchar, printf */

	// FILE*, stdin, stdout
	puts("KYS"); // automaticky \n, neformatovana sprava

	// EOF
	// <- scanf(...)
	// scanf("%d %d")
	// 30 20
	// $

	/*int a, b;
	printf("%d\n", scanf("%d %d ", &a, &b));*/

	char c;
	printf("kys");
	scanf("%c", &c);
	printf("char c -> %c\n", c);

	/* - riadiace struktury, cykly, viacnasobny if */

	// 1 ... n
	int N = 10;
	for (i = 1; i <= N; i++);
	// 0 ... n-1
	for (i = 0; i < N; i++);

	return 0;
}