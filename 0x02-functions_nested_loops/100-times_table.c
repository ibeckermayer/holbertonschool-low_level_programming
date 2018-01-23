#include "holberton.h"

/**
 * print_times_table - prints the times table of n if n > 0 and < 15
 * @n: the times table value
 */
void print_times_table(int n)
{
	int row, col, val, val_100, val_10, val_1;

	if (n > 0 && n < 15)
	{
		for (row = 0; row < n + 1; row++)
		{
			for (col = 0; col < n + 1; col++)
			{
				val = row * col;
				if (col != 0)
				{
					_putchar(',');
					_putchar(' ');
					if (val < 10)
						_putchar(' ');
					if (val < 100)
						_putchar(' ');
				}
				val_100 = val / 100;
				val_10 = val / 10 % 10;
				val_1 = val % 10;
				if (val_100 != 0)
				{
					_putchar('0' + val_100);
					_putchar('0' + val_10);
				}
				else if (val_10 != 0)
					_putchar('0' + val_10);
				_putchar('0' + val_1);
			}
			_putchar('\n');
		}
	}
}
