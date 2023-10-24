/**
 * _memcpy - function that copies memory area
 * @dest: pointer to the memory area dest
 * @src: pointer to the memory area src
 * @n: number bytes copies from src
 * Return: pointer to dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
