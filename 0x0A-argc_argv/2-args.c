#include "main.h"
#include <stdio.h>

/**
* main - prints file name
* @argc: amount of aguremnts passed
* @argv :array of agurements
*
* Return: int
*/

int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
