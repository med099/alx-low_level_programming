/**
 * _strlowcase - function changes uppercase letters of a string to lowercase.
 * @str: pointer to string
*/
void _strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
}
/**
 * cap_string - function that capitalizes all words of a string.
 * @str: pointer to string
 * Return: pointer to string
*/
char *cap_string(char *str)
{
	int i;
	int check;

	_strlowcase(str);
	check = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (check == 0)
			{
				str[i] -= 32;
				check = 1;
			}
		}
		else if ((str[i] >= '0' && str[i] <= '9') || str[i] == '-')
			check = 1;
		else
			check = 0;
		i++;
	}
	return (str);
}
