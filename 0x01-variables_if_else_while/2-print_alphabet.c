#include <stdio.h>

/**
 * main - prints the alphabet in lowercase
 *
 * Return: int
 */
int main(void)
{
	int ah;

	for (ah = 97; ah <= 122; ah++)
		putchar(ah);
	putchar('\n');
	return (0);
}
