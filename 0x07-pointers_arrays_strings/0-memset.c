/**
 * _memset - a function that fills @n byte of @s with @b
 * @s: array
 * @b: constant byte
 * @n: bytes to be replaced
 *
 * Return: pointer to @s
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
