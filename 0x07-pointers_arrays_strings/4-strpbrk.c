/**
 * _strpbrk - locates the first occurrence of @s in accept
 * @s: string
 * @accept: string
 *
 * Return: Returns a pointer to the matching address
*/
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; *(s + i); i++)
	{
		for (j = 0; *(accept + j); j++)
		{
			if (*(s + i) == *(accept + j))
			{
				return (s + i);
			}
		}
	}
	return ('\0');
}
