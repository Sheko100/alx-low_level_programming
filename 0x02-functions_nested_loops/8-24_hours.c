#include "main.h"

/**
 * jack_bauer - prints every minute of the day starting from 00:00 to 23:59
 *
 *
 * Return: void always
 */

void jack_bauer(void)
{
	int hourtens = 0;
	int hourones = 0;
	int mintens = 0;
	int minones = 0;

	while (hourtens != 2 || hourones != 4)
	{
	_putchar(hourtens + '0');
	_putchar(hourones + '0');
	_putchar(':');
	_putchar(mintens + '0');
	_putchar(minones + '0');
	_putchar(10);
	if (minones == 9)
	{
		if (mintens == 5)
		{
			if (hourones == 9)
			{
				hourones = 0;
				hourtens++;
			}
			else
			{
				hourones++;
			}
			mintens = 0;
		}
		else
		{
			mintens++;
		}
		minones = 0;
	}
	else
	{
		minones++;
	}
	}
}
