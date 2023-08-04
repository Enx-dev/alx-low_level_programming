#include <stdio.h>

/**
 * main - prints all digit of base 16
 *
 * Return: int
 */
int main(void)
{
	int num;
	int letter;

	for (num = 0; num <= 9; num++)
	{
		putchar('0' + num);
	}
	for (letter = 97; letter <= 102; letter++)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
