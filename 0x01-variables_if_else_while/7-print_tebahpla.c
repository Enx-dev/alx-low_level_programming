#include <stdio.h>

/**
 * main - prints the alphabet in lower case in reverse
 *
 * Return: int
 */
int main(void)
{
	int alp;

	alp = 122;
	while (alp > 96)
	{
		putchar(alp);
		alp--;
	}
	putchar('\n');
	return (0);
}
