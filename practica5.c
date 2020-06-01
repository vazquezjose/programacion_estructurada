#include <stdio.h>
#include <stdlib.h>

int main() {
	int i = 0, suma_total = 0, v;
	float promedio = 0.0f;
	
	while (v >= 0)
	{
		printf("Introduzca un valor entero: ");
		scanf("%i", &v);
		if (v >= 0)
		{
			suma_total = suma_total + v;
			i++;
		}
	}
	if (suma_total != 0)
		promedio = suma_total / i;
	printf("El promedio es de: %.2f.\n", promedio);
	
	system("pause");
	return 0;
}
