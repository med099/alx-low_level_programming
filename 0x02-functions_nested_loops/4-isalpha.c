/**
 * _isalpha - check lower case character
 *@c: character to check it
 * Return: 1 or 0.
 */
int	_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 'z'))
		return (1);
	return (0);
}
