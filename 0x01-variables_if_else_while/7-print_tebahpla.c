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
for (ch = 'z'; ch >= 'a'; ch--)
{
write(1, &c, 1);
}
write(1, "\n", 1);

return (0);
}
