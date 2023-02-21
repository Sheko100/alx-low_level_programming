
/**
 * _abs - computes the absolute value of an integer
 * @n: the integer which will be converted to absolute value
 *
 * Return: the absolute value of an integer
 */

int _abs(int n)
{
	int result;

	if (n < 0)
	{
		result = n - n - n;
	}
	else
	{
		result = n;
	}

	return (result);
}
