/**
 * _pow_recursion - function that returns the value of
 *  x raised to the power of y.
 * @x: number
 * @y: power
 * Return: x power y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else if (y == 1)
		return (x);
	return (x * _pow_recursion(x, y - 1));
}

/**
 * _sqrt_recursion - function that returns the natural square root of a number.
 * @n: number
 * Return:  square root of a number.
 */
int _sqrt_recursion(int n)
{
	int	sqr;

	sqr = 1;
	if (n > 0)
	{
		while (sqr <= 46360)
		{
			if (_pow_recursion(sqr, 2) == n)
				return (sqr);
			sqr++;
		}
	}
	return (-1);
}
