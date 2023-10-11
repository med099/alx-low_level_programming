/**
 * print_last_digit - calculate the absolute of number.
 *@i: absolute.
 * Return: abs of number.
 */
int print_last_digit(int i)
{
	if (i < 0)
		i = i * -1;
	i = (i % 10) + 48;
	write (1 , &i, 1);
	return (i);
}
