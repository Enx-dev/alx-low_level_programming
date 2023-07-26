/**
 * cap_string - cap string
 * @s: string
 *
 * Return: pointer
*/
char *cap_string(char *s)
{
	int i, j;
	char sep[13] = {' ', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}', '\t', '\n'};

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; j < 13; j++)
		{
			if (*(s + (i - 1)) == sep[j])
			{
				if (*(s + i) >= 97 && *(s + i) <= 122)
				{
					*(s + i) -= 32;
				}
				break;
			}
		}
	}
	return (s);
}