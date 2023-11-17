#include <stdio.h>
/**
  * print_it_first - function that prints something
  * before the main function is executed
  */
void print_it_first(void) __attribute__ ((constructor));
void print_it_first(void)
{
	printf("You're beat! and yet, you must allow,");
	printf("\nI bore my house upon my back!\n");
}
