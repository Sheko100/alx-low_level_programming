
/**
 * swap_int - swaps the values of two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int y;
	int *ap, *bp;

	ap = a;
	bp = b;

	y = *ap;
	*ap = *bp;
	*bp = y;

}
