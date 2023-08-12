#include <unistd.h>

/**
 * main - Entry point
 *
 * Description: print alphabet exept -q by usin putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char c;
c = 'a';
while (c <= 'z')
{
if (c == 'q' || c == 'e')
{
c++;
continue;
}
write(1, &c, 1);
c++;
}
write(1, "\n", 1);

return (0);
}
