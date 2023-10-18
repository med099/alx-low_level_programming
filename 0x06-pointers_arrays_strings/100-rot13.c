/**
 * rot13 - function that encodes a string using rot13
 * @str: pointer to string
 * Return: pointer to string
*/

char *rot13(char *str)
{
	int i, j;
	char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	char sro[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";

	i = 0;
	while (str[i])
	{
		j = 0;
		while (sro[j])
		{
			if (str[i] == sro[j])
			{
				str[i] = rot[j];
				break;
			}
			j++;
		}
		i++;
	}
	return (str);
}
