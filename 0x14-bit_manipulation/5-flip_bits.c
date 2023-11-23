#include "main.h"

/**
*flip_bits - function that returns the number of bits
* you would need to flip to get from one number to another
*@n: first number
*@m: second number
*Return: the number of flipped bits
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flip;
	int count = 0;

	flip = n ^ m;
	while (flip)
	{
		if (flip & 1)
			count++;
		flip >>= 1;
	}
	return (count);
}
