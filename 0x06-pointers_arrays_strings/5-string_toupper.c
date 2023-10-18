/**
 * string_toupper - function changes lowercase letters
 * of a string to uppercas
 * @str: string
 * Return: string
*/

char *string_toupper(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] += ('A' - 'a');
		i++;
	}
	return (str);
}
