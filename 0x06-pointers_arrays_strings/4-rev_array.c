
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
	int *revap;
	int i = 0;
	int reva[2000];

	ap = a;
	revap = reva;

	while (n > 0)
	{
		*(revap + i) = *(ap + (n - 1));
		i++;
		n--;
	}
	while (n < i)
	{
		*(ap + n) = *(revap + n);
		n++;
	}
}
