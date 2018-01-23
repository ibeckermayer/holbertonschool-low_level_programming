#include "holberton.h"

/**
 * jack_bauer - prints every minute of the day for Jack Bauer
 */
void jack_bauer(void)
{
	int hour, minute, hour_ones, hour_tens, minute_ones, minute_tens;

	hour = 0;
	minute = 0;

	for (hour = 0; hour < 24 ; hour++)
	{
		hour_tens = hour / 10;
		hour_ones = hour % 10;

		for (minute = 0; minute < 60; minute++)
		{
			minute_tens = minute / 10;
			minute_ones = minute % 10;

			_putchar('0' + hour_tens);
			_putchar('0' + hour_ones);
			_putchar(':');
			_putchar('0' + minute_tens);
			_putchar('0' + minute_ones);
			_putchar('\n');
		}
	}
}
