#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - adds numbers
 * @argc: number of arguments passed to the function
 * @argv: argument vector of pointers to strings
 *
 * Return: 0 if no errors, else 1
 */
int main(int argc, char *argv[])
{
	int a = 0, i = 0, j = 0;

	while (i < argc)
	{
		while (argv[i][j])
		{
			if (isdigit(argv[i][j]) == 0)
			{
				puts("Error");
				return (1);
			}
			j++;
		}
		i++;
	}
	i = 1;
	while (i < argc)
	{
		a += atoi(argv[i]);
	}
	printf("%d\n", a);
	return (0);
}
