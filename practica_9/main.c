#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

bool valido;
char datos[10][9][100], temporal[128];
int i, j;

int main()
{
	for (i = 0; i < 10; i++)
	{
		printf("---------------------LECTURA---------------------\n\n");
		do
		{
			printf("Introduzca la matricula del estudiante %i: ", i+1);
			fflush(stdin);
			gets(temporal);
			
			valido = true;
			
			if (strlen(temporal) < 1)
				printf("\n\tError: introduzca una matricula\n\n");
			else
				if (strlen(temporal) > 100)
					printf("\n\tError: el limite de caracteres es de 100\n\n");
				else
					for (j = 0; j < i; j++)
						if (strcmp(temporal, datos[j][0]) == 0)
						{
							valido = false;
							printf("\n\tError: la matricula introducida ya le pertenece a otro estudiante\n\n");
						}
		}
		while (!valido || strlen(temporal) < 1 || strlen(temporal) > 100);
		
		strcpy(datos[i][0], temporal);
		
		do
		{
			printf("Introduzca el nombre del estudiante %i: ", i+1);
			fflush(stdin);
			gets(temporal);
			
			if (strlen(temporal) < 1)
				printf("\n\tError: introduzca un nombre\n\n");
			else
				if (strlen(temporal) > 100)
					printf("\n\tError: el limite de caracteres es de 100\n\n");
		}
		while (strlen(temporal) < 1 || strlen(temporal) > 100);
		
		strcpy(datos[i][1], temporal);
		
		do
		{
			printf("Introduzca el primer apellido del estudiante %i: ", i+1);
			fflush(stdin);
			gets(temporal);
			
			if (strlen(temporal) < 1)
				printf("\n\tError: introduzca el primer apellido\n\n");
			else
				if (strlen(temporal) > 100)
					printf("\n\tError: el limite de caracteres es de 100\n\n");
		}
		while (strlen(temporal) < 1 || strlen(temporal) > 100);
		
		strcpy(datos[i][2], temporal);
		
		do
		{
			printf("Introduzca el segundo apellido del estudiante %i (opcional): ", i+1);
			fflush(stdin);
			gets(temporal);
			
			if (strlen(temporal) > 100)
				printf("\n\tError: el limite de caracteres es de 100\n\n");
		}
		while (strlen(temporal) > 100);
		
		strcpy(datos[i][3], temporal);
		
		do
		{
			printf("Introduzca la fecha de nacimiento del estudiante %i: ", i+1);
			fflush(stdin);
			gets(temporal);
			
			if (strlen(temporal) < 1)
				printf("\n\tError: introduzca la fecha de nacimiento\n\n");
			else
				if (strlen(temporal) > 100)
					printf("\n\tError: el limite de caracteres es de 100\n\n");
		}
		while (strlen(temporal) < 1 || strlen(temporal) > 100);
		
		strcpy(datos[i][4], temporal);
		
		do
		{
			printf("Introduzca la escuela del estudiante %i: ", i+1);
			fflush(stdin);
			gets(temporal);
			
			if (strlen(temporal) < 1)
				printf("\n\tError: introduzca la escuela\n\n");
			else
				if (strlen(temporal) > 100)
					printf("\n\tError: el limite de caracteres es de 100\n\n");
		}
		while (strlen(temporal) < 1 || strlen(temporal) > 100);
		
		strcpy(datos[i][5], temporal);
		
		do
		{
			printf("Introduzca el grado del estudiante %i: ", i+1);
			fflush(stdin);
			gets(temporal);
			
			if (strlen(temporal) < 1)
				printf("\n\tError: introduzca el grado\n\n");
			else
				if (strlen(temporal) > 100)
					printf("\n\tError: el limite de caracteres es de 100\n\n");
		}
		while (strlen(temporal) < 1 || strlen(temporal) > 100);
		
		strcpy(datos[i][6], temporal);
		
		do
		{
			printf("Introduzca la carrera del estudiante %i: ", i+1);
			fflush(stdin);
			gets(temporal);
			
			if (strlen(temporal) < 1)
				printf("\n\tError: introduzca la carrera\n\n");
			else
				if (strlen(temporal) > 100)
					printf("\n\tError: el limite de caracteres es de 100\n\n");
		}
		while (strlen(temporal) < 1 || strlen(temporal) > 100);
		
		strcpy(datos[i][7], temporal);
		
		do
		{
			printf("Introduzca el genero del estudiante %i: ", i+1);
			fflush(stdin);
			gets(temporal);
			
			if (strlen(temporal) < 1)
				printf("\n\tError: introduzca el genero\n\n");
			else
				if (strlen(temporal) > 100)
					printf("\n\tError: el limite de caracteres es de 100\n\n");
		}
		while (strlen(temporal) < 1 || strlen(temporal) > 100);
		
		strcpy(datos[i][8], temporal);
		
		system("cls");
	}
	
	printf("---------------------REPORTE---------------------\n\n");
	for (i = 0; i < 10; i++)
	{
		printf("Estudiante %i\n", i+1);
		printf("\tMatricula: %s\n", datos[i][0]);
		printf("\tPrimer nombre: %s\n", datos[i][1]);
		printf("\tPrimer apellido: %s\n", datos[i][2]);
		if (strlen(datos[i][3]) > 0)
			printf("\tSegundo apellido: %s\n", datos[i][3]);
		printf("\tFecha de nacimiento: %s\n", datos[i][4]);
		printf("\tEscuela: %s\n", datos[i][5]);
		printf("\tGrado: %s\n", datos[i][6]);
		printf("\tCarrera: %s\n", datos[i][7]);
		printf("\tGenero: %s\n", datos[i][8]);
		printf("\n\n");
	}
	
	system("pause");
	return 0;
}
