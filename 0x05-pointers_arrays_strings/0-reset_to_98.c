
/**
 * reset_to_98 - takes a pointer to an int as parameter and updates
 * the value it points to to 98
 * @n: the pointer to the int
 *
 * Return: void
 */

void reset_to_98(int *n)
{
	int *np;

	np = n;
	*np = 98;
}
