#include "unistd.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
void print_alphabet(void);
{
char a;
a = 'a';
while(a <= 'z')
	{
	write(1,&a,1);
	a++;
	}
write(1,"\n",1);
return (0);
}
