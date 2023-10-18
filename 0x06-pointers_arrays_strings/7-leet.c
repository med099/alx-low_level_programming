/**
 * leet - function that encodes a string into 1337
 * @str: pointer to string
 * Return: pointer to string
*/

char *leet(char *str)
{
	int i, j;
	char lee[] = "aAeEoOtTlL";
	char to[] = "4433007711";

	i = 0;
	while (str[i])
	{
		j = 0;
		while (lee[j])
		{
			if (str[i] == lee[j])
				str[i] = to[j];
			j++;
		}
		i++;
	}
	return (str);
}
