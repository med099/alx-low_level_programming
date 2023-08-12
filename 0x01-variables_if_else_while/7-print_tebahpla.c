#include <unistd.h>

/**
 * main - Entry point
 *
 * Description: print alphabet by usin putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char c;
c = 'z';
while (c <= 'a')
{
write(1, &c, 1);
c--;
}
write(1, "\n", 1);

return (0);
}
