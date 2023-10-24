/**
 * _strchr - function that locates a character in a string
 * @s: pointer to string s
 * @c: character to locate it in 's'
 * Return: a pointer to the matched character or NULL
*/
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			return (s);
		s++;
	}
	return (NULL);
}
