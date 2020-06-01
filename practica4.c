#include <stdio.h>
#include <stdlib.h>

int main()
{
	char c;
	float num1, num2, res = 0;
	
	printf("\t\tCALCULADORA\n");
	printf("Introduzca la primer cifra: ");
	scanf("%f", &num1);
	printf("Introduzca el tipo de operacion [+,-,*,/]: ");
	scanf(" %c", &c);
	printf("Introduzca la segunda cifra: ");
	scanf("%f", &num2);
	
	switch (c)
	{
		case '+':
			res = num1 + num2;
			break;
		case '-':
			res = num1 - num2;
			break;
		case '*':
			res = num1 * num2;
			break;
		case '/':
			res = num1 / num2;
			break;
		default:
			printf("El tipo de operacion es invalido.\n");
	}
	
	printf("El resultado es: %.f\n", res);
	
	system("pause");
	return 0;
}
