/**
 * reverse_array - function that reverses the content of an array of integers
 * @a: array of integers
 * @n: number of ellemants of array
 * Return: array of integers
*/
void reverse_array(int *a, int n)
{
	int i;
	int tmp;

	i = 0;
	n--;
	while (i < n)
	{
		tmp = a[i];
		a[i] = a[n];
		a[n] = tmp;
		i++;
		n--;
	}
}
