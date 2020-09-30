/*
	Bobak prednaska 2 [30.09.2020] 
	Sebastián Petrík  github.com/Plasmoxy
	MSVC VS2019
*/

// Prva definicia vypne varovania pre nezabezpecene funkcie
// Druha premenuje danu funkciu na main
// Tu si mozete prepinat ze ktoru fciu. chcete spustit v tomto subore
#define _CRT_SECURE_NO_WARNINGS
#define f_ovladanie_programu main

#include <stdio.h>



int f_ovladanie_programu(void) {
	char op;
	int n1, n2, vysledok = 0;

	scanf("%d %c %d", &n1, &op, &n2);

	switch (op) {
		case '+':
			vysledok = n1 + n2;
			break;
		case '-':
			vysledok = n1 - n2;
			break;
		case '*':
			vysledok = n1 * n2;
			break;
		case '/':
			vysledok = n1 / n2;
			break;
		default:
			printf("Zla operacia.");
	}

	printf("Vysledok = %d", vysledok);

	return 0;
}

int f_text(void) {
	char c; // 8 bitove cislo, uklada sa do neho zvycajne ASCII znak
	printf("Zadajte znak\n");
	c = getchar();

	printf("%c je reprezentovane ciselne ako %d, hexadecimalne %x\n", c, c, c);

	if (c >= 'A' && c <= 'Z') {
		printf("VELKE PISMENO\n");
	}
	else if (c >= 'a' && c <= 'z') {
		printf("je to male pismeno :((\n");
	}
	else if (c >= '0' && c <='9') {
		printf("je to cislica\n");
	}
	else {
		printf("Nie je to pismeno.\n");
	}

	return 0;
}

int f_vetvenie(void) {

	/*
		if = jednoduche vetvenie programu
		uplny if = ma aj if aj else
		neuplny if = nema else

		zatvorky: ak mas za ifom alebo za else iba 1 prikaz, nemusis pouzit {}
		-> v opacnom pripade ak mas viac prikazov, musis ich drbnut do {}
		-> ale radsej pouzivaj zatvorky vzdy, sa neodrbes zbytocne
	*/

	int s, t, u = 0;
	printf("Zadajte 2 cisla\n");
	scanf("%d %d", &s, &t);

	if (s == t) {
		printf("Cisla su rovnake");
	}
	else {
		printf("Cisla su rozne");
	}


	// kompleks podmienky pomocou logickych vyrazov
	// napr. s't'u + tu
	if (!s && !t && u + t && u) {
		printf("YES\n");
	}

	// === Ternarny operator ===
	// aby sme nemuseli zbytocne davat if
	int vacsie = s > t ? s : t;

	// == Mnohonasobne vetvenie ==
	if (s == 'a') {
		// ...
	}
	else if (s == 'b') {

	}
	else if (s == 'c') {

	}

	// alternativne mozes pouzit switch

	switch (s) {
		case 'a':
			// ...
			// ...
			break;
		case 'b':
			// ...
			break;
		case 'c':
			break;

		default:
			// ak ani jeden case neprejde
			break;
	}

	return 0;
}


int f_operatory(void) {
	// Relacne operatory
	// - ich vysledkom je logicka hodnota
	// pravda = nenulova hodnota
	// nepravda = 0
	int a = 4, b = 5;

	printf("%d\n", b > a); // 1

	// pozor na == verzus =, t = 0 je validny vyraz
	printf("%d\n", a = 5); // 5 a nie 1 (true)
	printf("%d\n", a == 5); // 1 (true)

	// pozor na porovnavanie realnych cisel, nemusia sa rovnat a aj tak nam vrati true

	// === Logicke operatory ===
	/*
		|| - or
		&& - and
		! - not
	- tymito operatormi vieme vyjadrit hocijaky logicky vyraz
	*/

	// === Skratene vyhodnocovanie ===
	// ideme zlava doprava, a ak uz vysledok je zrejmy tak C nebude pokracovat vo vyhodnocovani
	// napr.
	// if (je_parne(x) && 0 == 0 && je_neparne(x)) {}
	// -> funkcia je_neparne(x) sa nikdy nezavola, pretoze if sa prestane vykonavat/vyhodnocovat uz pri 0 == 0 lebo je to true
	// -> preto nepouzivat radsej funkcie v logickych vyrazoch

	// === Bitove operatory ===
	/*
		& -> and, | -> or, ~ -> not, ^ -> xor
		<<  -> posun bitov do lava (LSHIFT)
		>>  -> posun bitov do prava  (RSHIFT)

		POZOR - po posune stratis 1 bit na danej strane !!!!
	*/

	// === Poradie vyhodnotenia ===
	/*
	1. ++, --, !
	2. *, /, %
	3. +, -
	4. <, >, <=, >=
	5. ==, !=
	6. &&
	7. ||
	8. =

	-> ak mam operatory tej istej priority, vyhodnocuju sa zlava doprava
	-> ALE !, ++, --, =           -->  IDU ZPRAVA DOLAVA

	pretoze napr a = b = 4      najprv b = 4, potom a = b

	*/

	/*
		i++   -> najrpv vyhodi hodnotu i, potom sa pripocita jendotka
		(teda bude to i)
		++i   -> najprv sa pripocita 1, potom sa vyhodnoti
		(teda bude to i + 1)
	*/

	int i = 0;
	printf("++i = %d\n", ++i); // 1
	printf("i++ = %d\n", i++); // stale 1, lebo sme pripocitali az potom ako vyhodnotili

	/*
		LIFE HACK
		- drbaj radsej vsade zatvorky, zvysuje to citatelnost
		  a taktiez mas istotu ze sa to spravne vykona
		- nespoliehaj sa furt na poradie vyhodnocovania operatorov
	*/

	return 0;
}


int f_hello(void) {
	int a = 0, b = 0;

	// scanf/printf -> (format string, ... argumenty)
	// c je nizkourovnove, musime do scanf dat adresu premennych aby ich cez
	// adresy pocitac vedel zmenit
	scanf("%d %d", &a, &b);
	printf("a + b = %d\n", a + b);
	return 0;
}


