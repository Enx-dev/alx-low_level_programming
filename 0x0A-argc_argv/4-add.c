#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
/**
 * main - adds agurs
 * @argc: length of the aguments
 * @argv: array of the agumentes
 *
 * Return: int
*/
int main(int argc, char *argv[])
{
	int i, sum;

	sum = 0;
	if (argc > 1)
	{
		for(i = 0; i < argc; i++)
		{
			if(isdigit(argv[i]) == 1))
			{
				sum += atoi(argv[i]); 
			}
			else
			{
				printf("Error");
				return (1);
			}
		}
		printf("%d", sum);
		return (0);
	}
	printf("0");
	return (0);
}