#include "main.h"

/**
*get_bit -  function that returns the value of a bit at a given index
*@n: the number
*@index: the bit you want to get
*Return: The value of bit
*/

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);

	return ((n >> index) & 1);
}
