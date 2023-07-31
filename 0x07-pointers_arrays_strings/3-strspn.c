/**
 * _strspn - returns the number of bytes in the initial segment
 * @s: string
 * @accept: string
 *
 * Return: unsigned int
*/
unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	unsigned int count;

	count = 0;
	i = 0;
	j = 0;

	while (*(s + i) != '\0' && *(accept + j) != '\0')
	{
		if (*(s + i) == *(accept + j))
		{
			count += 1;
			i++;
			j = 0;
			continue;
		}
		j++;
	}
	return (count);
}