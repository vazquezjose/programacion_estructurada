#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "spanish");
	
	int i, n;
	
	printf("Ingrese el tamaño del triángulo: ");
	scanf("%i", &n);
	
	for(i = 0; i < n; i++)
		printf("%i ", fibbonacci(i));
	printf("\n");
	
	system("pause");
	return 0;
}

int fibbonacci(int n) 
{
	if (n <= 1) 
		return n;
	return fibbonacci(n - 1) + fibbonacci(n - 2); 
}
