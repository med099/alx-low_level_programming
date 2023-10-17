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
	int digit;

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
		digit = s[i] - 48;
		if (num > 2147483647 || (num == 214748364 && digit > 7))
		{
			if (sign == 1)
				return (2147483647);
			else
				return (-2147483648);
		}
		num = 10 * num + digit;
		i++;
	}
	return (sign * num);
}
