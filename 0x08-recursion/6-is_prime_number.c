
/**
 * is_prime_number - checks if the number is a prime number
 * @n: number to check
 *
 * Return: 1 if number is prime
 * 0 if number is not prime
 */

int is_prime_number(int n)
{
	int i = 2;
	int r;

	if (n % i == 0)
	{
		return (0);
	}
	else if (i * i > 2)
	{
		return (1);
	}
	r = is_prime_number(n - 1);
	return (r);
}
