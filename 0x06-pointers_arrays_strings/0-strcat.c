/**
 * _strcat - Concats @src to @dest
 * @src: string to be concatinated
 * @dest: string to be added to
 *
 * Return: a pointer to the resulting string
*/
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	j = 0;
	while (*(dest + i) != '\0')
	{
		i++;
	}
	while (*(src + j) != '\0')
	{
		*(dest + i) = *(src + j);
		i++;
		j++;
	}
	*(dest + i) = '\0';
	return (dest);
}
