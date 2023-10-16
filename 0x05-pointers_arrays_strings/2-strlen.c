/**
 * _strlen - function that count length of string
 * @s: string
 * Return: return length of string
 */

int _strlen(char *s)
{
	int i;
	
	i = 0;
	while (*s+i)
		i++;
	return (i);
}
