#include <unistd.h>

/**
 * main - Entry point
 *
 * Description: Numbers separated by ,, followed by a space
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char c;
c = '0';
while (c <= '9')
{
write(1, &c, 1);
write(1, ",", 1);
write(1, " ", 1);
c++;
}
write(1, "\n", 1);

return (0);
}
