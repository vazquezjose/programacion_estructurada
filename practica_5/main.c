#include <stdio.h>
#include <stdlib.h>

int i, suma_total = 0, v;
float promedio;

int main() {
	i = 0;
	while (v >= 0)
	{
		printf("Introduzca un valor entero: ");
		scanf("%i", &v);
		if (v >= 0)
		{
			suma_total += v;
			i++;
		}
	}
	promedio = suma_total / i;
	printf("El promedio es de: %.2f.\n", promedio);
	return 0;
}