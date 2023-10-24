/**
 * _memset - function that fills memory with a constant byte
 * @s: pointer to the memory area s
 * @b: costant byte
 * @n: number of bytes to set it
 * Return: pointer to the memory area s
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
		s[i++] = b;
	return (s);
}
