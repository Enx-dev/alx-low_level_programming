#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* main - prints file name
* @argc: amount of aguremnts passed
* @argv :array of agurements
*
* Return: int
*/

int main(int argc, char *argv[])
{
	int sum = 0;
	int i = 1;
	
	while (i < argc)
	{
		if (atoi(argv[i]) == 0)
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
		i++;
	}
	printf("%d\n", sum);
	return (0);
}
