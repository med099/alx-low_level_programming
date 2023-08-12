#include <unistd.h>

/**
 * main - Entry point
 *
 * Description: prints all the numbers of base 16 in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char c, n;
c = 'a';
n = '0';
while (n <= '9')
{
write(1, &c, 1);
n++;
}
while (c <= 'z')
{
write(1, &c, 1);
c++;
}
write(1, "\n", 1);

return (0);
}
