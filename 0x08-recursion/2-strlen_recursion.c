/**
 * _strlen_recursion - function that returns the length of a string.
 * @s: string to count her length
 * Return: length of string
*/
int _strlen_recursion(char *s)
{
	if (!(*s))
	{
		return (0);
	}
	s++;
	return (_strlen_recursion(s) + 1);
}
