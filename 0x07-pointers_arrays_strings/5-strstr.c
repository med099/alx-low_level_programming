
/**
 * _strstr - locates a substring
 * @haystack: string to look though
 * @needle: substring to find
 * Return: pointer to string with result of search
 */
char *_strstr(char *haystack, char *needle)
{
	int	i;
	int	j;

	i = 0;
	while (haystack[i])
	{
		j = 0;
		while (needle[j] == haystack[j + i] && haystack[i + j])
			j++;
		if (needle[j] == '\0')
			return (haystack + i);
		i++;
	}
	return (0);
}
