/**
 * int_index - function that searches for an integer
 * @array: array of intergers
 * @size: size of array
 * @cmp:  pointer to the function to be used to compare values
 * Return: index of the first element
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || !array || !cmp)
		return (-1);
	i = 0;
	while (i < size)
	{
		if (((*cmp)(array[i])))
			return (i);
		i++;
	}
	return (-1);
}
