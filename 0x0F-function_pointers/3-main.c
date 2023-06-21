#include "3-calc.h"

/**
 * main - that performs simple operations
 * @ac: arguments count
 * @av: arguments values
 *
 * Return: 0 always
 */

int main(int ac, char *av[])
{
	int res = 0;
	int (*opfunc)(int, int);

	if (ac != 4)
	{
		printf("Error\n");
		exit(98);
	}


	opfunc = get_op_func(av[2]);
	if (opfunc == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	res = opfunc(atoi(av[1]), atoi(av[3]));

	printf("%d\n", res);
	return (0);
}
