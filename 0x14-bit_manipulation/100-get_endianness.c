#include "main.h"

/**
 * get_endianness - check if the machince using either small or bih endian
 *
 * Return: 1 if small endian
 * 0 if big endian
 */

int get_endianness(void)
{

	union b n;

	n.num = 15;

	if (n.byte[0] == 0xf)
		return (1);
	else
		return (0);
}
