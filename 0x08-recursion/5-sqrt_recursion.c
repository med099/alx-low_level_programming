/**
 * _sq_power_two - function that check number 'from 1 to Xnumber' power 2
 *  .
 * @sq: Xnumber
 * @n: number to find its sqrt
 * Return: sqrt of number
 */
int _sq_power_two(int sq, int n)
{
	if (sq * sq > n)
		return (-1);
	else if  (sq * sq == n)
		return (sq);
	return (_sq_power_two(sq + 1, n));
}

/**
 * _sqrt_recursion - function that returns the natural square root of a number.
 * @n: number
 * Return: square root of a number.
 */
int _sqrt_recursion(int n)
{
	return (_sq_power_two(1, n));
}
