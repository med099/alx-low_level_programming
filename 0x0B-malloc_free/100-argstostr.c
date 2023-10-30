#include <stdlib.h>
/**
 * argstostr - function that concatenates all the arguments of your program.
 * @ac: argument count
 * @av: pointer to argument
 * Return: a pointer to a new string, or NULL if it fails
*/
char *argstostr(int ac, char **av)
{
	char *str;
	int i, j, len;

	if (ac == 0)
		return (NULL);
	if (av == NULL)
		return (NULL);
	i = len = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
		{
			j++;
			len++;
		}
		i++;
	}
	str = malloc(sizeof(char) * len + i + 1);
	if (!str)
		return (NULL);
	len = 0;
	for (i = 0; av[i]; i++)
	{
		for (j = 0; av[i][j]; j++, len++)
			str[len] = av[i][j];
		str[len] = '\n';
		len++;
	}
	return (str);
}
