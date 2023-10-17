/**
 * rev_string - function that reverses a string
 * @s: the string
 */

void rev_string(char *s)
{
	int i;
	int j;
	int len;
	char rev;

	i = 0;
	while (s[len])
		len++;
	j = len - 1;
	while (i <= len / 2)
	{
		rev = s[i];
		s[i] = s[j];
		s[j] = s[i];
		i++;
		j--;
	}
}
