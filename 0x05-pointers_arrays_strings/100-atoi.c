/**
 * _atoi -  function that convert a string to an integer.
 * @s: string
 * Return: return integer
 */

int _atoi(char *s)
{
	int i;
	int sign;
	int num;

	i = 0;
	sign = 1;
	num = 0;
	while (s[i] && !(s[i] >= '0' && s[i] <= '9'))
	{
		if (s[i] == '-')
			sign *= -1;
		i++;
	}
	while (s[i] >= '0' && s[i] <= '9')
	{
		num = 10 * num + (s[i] - 48);
		i++;
	}
	return (sign * num);
}
