

/**
 * _pow_recursion - calculates the value of x raised to the power of y
 * @x: integer to power
 * @y: power value
 *
 * Return: result after power
 */

int _pow_recursion(int x, int y)
{
	int r;

	if (y == 0)
	{
		return (1);
	}
	else if (y < 0)
	{
		return (-1);
	}

	r = x * _pow_recursion(x, y - 1);

	return (r);
}
