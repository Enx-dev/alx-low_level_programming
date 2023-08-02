/**
 * _pow_recursion - raise @x to the @y
 * @x: number
 * @y: number
 *
 * Return: the power
*/
int _pow_recursion(int x, int y)
{
	if (y <= 0)
	{
		return (1);
	}
	return x * _pow_recursion(x, y - 1);
}