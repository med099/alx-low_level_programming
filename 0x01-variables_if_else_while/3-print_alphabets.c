#include <unistd.h>

/**
 * main - Entry point
 *
 * Description: print alphabet by usin putchar
 * alphabet in lowercase, and then in uppercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char c, C;
c = 'a';
C = 'A';
while (c <= 'z')
{
write(1,&c,1);
c++;
}
while (C <= 'Z')
{
write(1,&C,1);
C++;
}
write(1,"\n",1);

return (0);
}
