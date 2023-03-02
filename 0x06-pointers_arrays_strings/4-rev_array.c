
/**
 * reverse_array - reverses the content of an array of integers
 * @a: array of integers
 * @n: array number of elements
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int *ap;
	int i = 0;
	int storednum;

	ap = a;

	while (n > 0)
	{
		if (n <= i)
		{
			break;
		}
		storednum = *(ap + i);
		*(ap + i) = *(ap + (n - 1));
		*(ap + (n - 1)) = storednum;
		i++;
		n--;
	}
}
