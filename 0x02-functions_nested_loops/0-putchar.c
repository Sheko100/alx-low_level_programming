#include "main.h"

int main(void)
{
	char str[10] = "_putchar\n";
	int i = 0;

	while (i < 10)
	{
		_putchar(str[i]);
		i++;
	}

	return (0);
}
