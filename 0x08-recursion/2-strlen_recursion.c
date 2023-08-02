/**
 * _strlen_recursion - gets the length of a string
 * @s: string
 *
 * Return: he length od @s
*/
int _strlen_recursion(char *s)
{
	int count;

	count = 1;
	if (*s != '\0')
	{
		s++;
		return count + _strlen_recursion(s);
	}
	return (0);
}