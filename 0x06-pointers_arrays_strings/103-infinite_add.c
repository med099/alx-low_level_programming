/**
 * len_n - calcul length of n1 and n2
 * @num: pointer of num
 * Return: length of num
*/
int len_n(char *num)
{
	int i;

	i = 0;
	while (num[i])
		i++;
	return (i);
}

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
	int i, j, k, l, m, n;

	i = len_n(n1);
	j = len_n(n2);
	if (i > size_r || j > size_r)
		return (0);
	m = 0;
	k = 0;
	i--;
	j--;
	while (k < size_r - 1)
	{
		n = m;
		if (i >= 0)
			n += n1[i] - '0';
		if (j >= 0)
			n += n2[j] - '0';
		if (i < 0 && j < 0 && n == 0)
		{
			break;
		}
		m = n / 10;
		r[k] = n % 10 + '0';
		i--;
		j--;
		k++;
	}
	r[k] = '\0';
	if (i >= 0 || j >= 0 || m)
		return (0);
	for (k -= 1, l = 0; l < k; k--, l++)
	{
		m = r[k];
		r[k] = r[l];
		r[l] = m;
	}
	return (r);
}
