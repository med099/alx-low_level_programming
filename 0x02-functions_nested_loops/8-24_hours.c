/**
 * jack_bauer -  prints every minute of the day.
 * @h: heur.
 * @m: minute.
 * Return: Void.
 */
void jack_bauer(void)
{
	int h;
	int m;

	h = 0;
	whil(m < 24)
	{
		m = 0;
		while(m < 60)
		{
			_putchar((h / 10) + 48);
			_putchar((h % 10) + 48);
			_putchar(':');
			_putchar((m / 10) + 48);
			_putchar((m % 10) + 48);
			m++;
		}
		h++;
	}
}
