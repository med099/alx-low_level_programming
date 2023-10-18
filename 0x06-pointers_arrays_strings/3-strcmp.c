/**
 * _strcmp - function that compares two strings
 * @s1: first strinf
 * @s2: second string
 * Return: string
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i])
	{
		if (s1[i] == s2[i])
			i++;
		else
			return (s1[i] - s2[i]);
	}
	return (0);
}
