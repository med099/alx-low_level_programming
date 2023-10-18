/**
 * _strncat - function that concatenates two strings
 * @dest: destination
 * @src: source
 * @n: number of bytes
 * Return: string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (dest[j])
		j++;
	while (i < n && src[i])
		dest[j++] = src[i++];
	dest[j] = '\0';
	return (dest);
}
