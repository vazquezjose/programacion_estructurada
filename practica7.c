#include <stdio.h>
#include <stdlib.h>

int main()
{
	int v, i;
	
	printf("Introduzca un numero entero: ");
	scanf("%i", &v);
	
	printf("Numeros primos:");
	
	if (v < 100)
		for (i = 2; i <= v; i++)
			if (!(i % 2 == 0 || i % 3 == 0 || i % 5 == 0 || i % 7 == 0) || i == 2 || i == 3 || i == 5 || i == 7)
				printf("%i\n", i);
	
	system("pause");
	return 0;
}
