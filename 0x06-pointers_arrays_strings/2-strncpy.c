/**
 * _strncpy - copies the @n byte(s) of @src to @dest
 * @dest: destination
 * @src: source
 * @n: byte(s)
 *
 * Return: pointer to the @dest
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (i < n && *(src + i) != '\0')
	{
		*(dest + i) = *(src + i);
		i++;
	}
	while (i < n)
	{
		*(dest + i) = '\0';
		i++;
	}
	return (dest);
}