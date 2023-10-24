/**
 * _strspn - function that gets the length of a prefix substring
 * @s: string
 * @accept: caracteres to compare with 's'
 * Return: number of bytes in the initial segment of
 * s which consist only of bytes from accept
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, ok;

	i = 0;
	j = 0;
	ok = 0;
	while (s[i] && j == 0)
	{
		while (accept[j])
		{
			if (s[i] == accept[j])
			{
				ok++;
				break;
			}
			j++;
		}
		if (accept[j] == '\0')
			break;
		j = 0;
		i++;
	}
	return (ok);
}
