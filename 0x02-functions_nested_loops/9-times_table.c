#include "holberton.h"

/**
 * times_table - prints the 9 times table
 */
void times_table(void)
{
	int row, col, val, val_10, val_1;

	for (row = 0; row < 10; row++)
	{
		for (col = 0; col < 10; col++)
		{
			val = row * col;
			if (col != 0)
			{
				_putchar(',');
				_putchar(' ');
				if (val < 10)
					_putchar(' ');
			}

			val_10 = val / 10;
			val_1 = val % 10;
			if (val_10 != 0)
				_putchar('0' + val_10);
			_putchar('0' + val_1);
		}
		_putchar('\n');
	}
}
