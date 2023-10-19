/**
 * cap_string - function that capitalizes all words of a string.
 * @str: pointer to string
 * Return: pointer to string
*/
char *cap_string(char *str)
{
	int i;
	int j;
	char check[] = " \t\n,;.!?\"(){}";

	i = 0;
	if (str[i] >= 'a' && str[i] <= 'z')
	{
		str[i] -= 32;
		i++;
	}
	while (str[i])
	{
		j = 0;
		while (check[j])
		{
			if ((str[i] >= 'a' && str[i] <= 'z') && str[i - 1] == check[j])
				str[i] -= 32;
			j++;
		}
		i++;
	}
	return (str);
}
