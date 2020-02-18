#include <stdio.h>
#include <stdlib.h>

char c;
int ascii;

int main() {
	printf("Ingresa un caracter:\n");
	c = getchar();
	ascii = (int) c;
	
	if (ascii >= 48 && ascii <= 57)
		printf("El caracter introducido es un numero.\n");
	else
		if (ascii >= 65 && ascii <= 90)
			printf("El caracter introducido es una letra mayuscula.\n");
		else
			if (ascii >= 97 && ascii <= 122)
				printf("El caracter introducido es una letra minuscula.\n");
			else
				printf("El caracter introducido es un simbolo.\n");
	system("pause");
	return 0;
}
