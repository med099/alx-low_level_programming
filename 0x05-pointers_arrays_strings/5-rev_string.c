/**
 * rev_string - function that reverses a string
 * @s: the string
 */

void rev_string(char *s)
{
	int i;
	int j;
	char rev;

	i = 0;
	j = 0;
	while (s[j])
		j++;
	j--;
	while (i < j)
	{
		rev = s[i];
		s[i] = s[j];
		s[j] = rev;
		i++;
		j--;
	}
}
