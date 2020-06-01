#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i, j, matriz[3][3], escalar;
	
	for (i = 0; i < 3; i++)
		for (j = 0; j < 3; j++)
		{
			printf("matriz[%i][%i]: ", i+1, j+1);
			scanf("%i", &matriz[i][j]);
		}
	
	printf("Introduzca el escalar: ", escalar);
	scanf("%i", &escalar);
	
	for (i = 0; i < 3; i++)
		for (j = 0; j < 3; j++)
		{
			matriz[i][j] *= escalar;
			printf("matriz[%i][%i]: %i\n", i+1, j+1, matriz[i][j]);
		}
	system("pause");
	return 0;
}
