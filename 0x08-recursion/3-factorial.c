
/**
 * factorial - calculates the factorial of a given number
 * @n: number to get its factorial
 *
 * Return: the factorial number
 */

int factorial(int n)
{
	int r;

	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);

	r = n * factorial(n - 1);
	return (r);
}
