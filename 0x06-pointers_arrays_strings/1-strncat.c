/**
 * _strncat - add @n bytes of @src to @dest
 * @dest: destination
 * @src: source
 * @n: byte(s)
 *
 * Return: a pointer to the resulting string
*/
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;
	while (*(dest + i) != '\0')
	{
		i++;
	}
	while (j < n && *(src + j) != '\0')
	{
		*(dest + i) = *(src + j);
		i++;
		j++;
	}
	*(dest + i) = '\0';
	return (dest);
}
