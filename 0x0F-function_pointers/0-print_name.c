#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: name of the person
 * @f: pointer to a function
 *
 * Return: void always
 */

void print_name(char *name, void (*f)(char *))
{
	void (*fp)(char *);

	fp = f;

	fp(name);
}
