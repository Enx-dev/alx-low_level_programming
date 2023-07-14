#include <stdio.h>

/**
 * main - prints the alphabet in lower case except q and e
 *
 * Return: int
 */
int main(void)
{
	int alp;

	alp = 97;
	while (alp < 123)
	{
		if (alp != 101 && alp != 113)
		{
			putchar(alp);
		}
		alp++;
	}
	putchar('\n');
	return (0);
}
