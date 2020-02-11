#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(int argc, char* argv[]) {
	// Integer
	int a = 3, b = 4, c;
	c = a + b;
	printf("Suma:\n%i + %i = %i\n\n", a, b, c);
	c = a - b;
	printf("Resta:\n%i - %i = %i\n\n", a, b, c);
	c = a * b;
	printf("Multiplicacion:\n%i x %i = %i\n\n", a, b, c);
	c = a / b;
	printf("Division:\n%i / %i = %i\n\n", a, b, c);
	c = a % b;
	printf("Residuo:\n%i / %i, R=%i\n\n", a, b, c);
	a++;
	printf("Incremento en a:\n%i\n\n", a);
	a = 3;
	b--;
	printf("Decremento en b:\n%i\n\n", b);
	b = 4;
	c = a > b;
	printf("Mayor que:\n%i > %i = %i\n\n", a, b, c);
	c = a < b;
	printf("Menor que:\n%i < %i = %i\n\n", a, b, c);
	c = a == b;
	printf("Igual que:\n%i == %i = %i\n\n", a, b, c);
	
	// Boolean
	c = a > b && a < b;
	printf("And:\n%i > %i && %i < %i = %i\n\n", a, b, a, b, c);
	c = a > b || a < b;
	printf("Or:\n%i > %i || %i < %i = %i\n\n", a, b, a, b, c);
	c = !(a > b && a < b);
	printf("Not:\n%i > %i && %i < %i = %i\n\n", a, b, a, b, c);
	c = (a > b) == (a < b);
	printf("Igual que:\n%i > %i == %i < %i = %i\n\n", a, b, a, b, c);
	
	// Char
	char ca = '3', cb = '4';
	char cc = 0;
	cc = ca > cb;
	printf("Mayor que:\n%s > %s = %i\n\n", ca, cb, cc);
	cc = ca < cb;
	printf("Menor que:\n%s < %s = %i\n\n", ca, cb, cc);
	cc = (ca > cb) == (ca < cb);
	printf("Igual que:\n%s > %s == %s < %s = %i\n\n", ca, cb, ca, cb, cc);
	
	system("pause");
	return 0;
}
