#include <stdio.h>

/**
 * main - prints the alphapets in lowercase and then in
 * uppercase followed by a new line
 *
 * Return: int
 */
int main(void)
{
	int lower;
	int upper;

	lower = 97;
	upper = 65;

	while (lower < 123)
	{
		putchar(lower);
		lower++;
	}
	while (upper < 91)
	{
		putchar(upper);
		upper++;
	}
	putchar('\n');
	return (0);
}
