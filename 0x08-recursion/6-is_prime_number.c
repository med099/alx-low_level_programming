/**
  * is_prime - function that checks if the number is a prime
  * @n: number
  * @i: checker
  * Return: returns 1 if the input integer is a prime, otherwise return 0
  */
int is_prime(int n, int i)
{
	if (n <= 1)
		return (0);
	if (i == 1)
		return (1);
	if (n % i == 0)
		return (0);
	return (is_prime(n, i - 1));
}

/**
  * is_prime_number - function that checks if the number is a prime number
  * @n: number
  * Return: returns 1 if the input integer is a prime, otherwise return 0
  */
int is_prime_number(int n)
{
	return (is_prime(n, n - 1));
}
