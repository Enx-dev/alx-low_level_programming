/**
 * _checker - chesks if n can be divided by num
 * @n: number
 * @num: divisor
 *
 * Return: int
*/
int _checker(int num, int n)
{
	if (num == n)
	{
		return (1);
	}
	if (n % num == 0)
	{
		return (0);
	}
	return (_checker(num + 1, n));
}

/**
 * is_prime_number - checks if @n is a prime number
 * @n: number
 *
 * Return: 1 if prime number else 0
*/
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (_checker(2, n));

}
