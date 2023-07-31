/**
 * _strchr - returns a pointer to the first occurance of c in s
 * @s: a string
 * @c: a char
 *
 * Return: a pointer to the first instance of @c or null if not found
*/
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		if (*(s + i) == c)
		{
			return (s+i);
		}
	}
	return ('\0');
}