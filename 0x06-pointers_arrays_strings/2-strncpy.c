/**
 * _strncpy - function that concatenates two strings
 * @dest: destination
 * @src: source
 * @n: number of bytes
 * Return: string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (i < n && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	if (!src[i])
		dest[i] = '\0';
	return (dest);
	}
