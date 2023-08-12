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
int c;
c = 48;
while (c <= 57)
{
write(1, &c, 1);
write(1, ",", 1);
write(1, " ", 1);
c++;
}
write(1, "\n", 1);

return (0);
}
