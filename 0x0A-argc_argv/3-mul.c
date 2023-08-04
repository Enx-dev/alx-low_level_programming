#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two numbers
 * @argc: int
 * @argv: array
 *
 * Return: int
*/
int main(int argc, char *argv[])
{
	int i, mul;

	i = 1;
	mul = 1;
	if (argc == 3)
	{
		while(i < argc)
		{
			mul *= atoi(argv[i]);
			i++;
		}
		printf("%d\n", mul);
		return (0);
	}
	printf("Error");
	return (0);

}