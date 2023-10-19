/**
 * infinite_add - function that adds two numbers
 * @n1: first string
 * @n2: secondstring
 * @r: pointer to buffer
 * @size_r: size for the buffer
 * Return: pointer to buffer
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, j, n;

	i = j = n = 0;
	if ((n1[0] - 48) + (n2[0] - 48) >= 10)
	{
		r[0] = 1 + 48;
		j = 1;
	}
	while (i < size_r && (n1[i] != '\0' || n2[i] != '\0' || r[j] != '\0'))
	{
		if ((n1[i + 1] - 48) + (n2[i + 1] - 48) >= 10)
			n = 1;
		else
			n = 0;
		r[j] = (n1[i] - 48) + (n2[i] - 48) + n;
		r[j] = r[j] % 10 + 48;
		i++;
		j++;
		if (n1[i] == '\0' || n2[i] == '\0')
			r[j] = '\0';
	}
	r[j] = '\0';
	return (r);
}
