
/**
 * _sqrt_recursion - calculates the square root of number
 * @n: number to get its square root
 *
 * Return: result of the sqaure root
 */

int _sqrt_recursion(int n)
{
	int r = 2;

	if (n < 0)
	{
		return (-1);
	}
	else if (n == 1)
		return (1);
	else if (n / r == r)
	{
		return (r);
	}

	r = _sqrt_recursion(n / 2);

	return (r);
}
