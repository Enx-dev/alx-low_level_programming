/**
 * leet - encodes a string into 1337
 * @s: string
 *
 * Return: pointer
*/
char *leet(char *s)
{
	int i, j;
	char rp[5] = {'a', 'e' ,'o' ,'t' ,'l'};
       	char mp[5] = {'4', '3', '0', '7', '1'};

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (*(s + i) == rp[j] || (*(s + i) + 32) == rp[j])
			{
				*(s + i) = mp[j];
				break;
			}
		}
	}
	return (s);
}
