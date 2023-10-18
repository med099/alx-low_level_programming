/**
 * rot13 - function that encodes a string using rot13
 * @str: pointer to string
 * Return: pointer to string
*/

char *rot13(char *str)
{
	int i, j;
	char s[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	char rot[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";

	i = 0;
	while (str[i])
	{
		j = 0;
		while (s[j])
		{
			if (str[i] == s[j])
				str[i] = rot[j];
			j++;
		}
		i++;
	}
	return (str);
}
