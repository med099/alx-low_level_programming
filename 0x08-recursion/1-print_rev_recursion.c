/**
 * _print_rev_recursion - function that prints a string in reverse
 * @s: string to print it
*/
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		_print_rev_recursion(s++);
		_putchar(s);
	}
}
