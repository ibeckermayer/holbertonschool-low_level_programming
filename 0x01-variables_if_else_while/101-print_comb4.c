#include <stdio.h>

/**
 * main - prints all possible different combinations of three digits.
 * Return: 0
 */
int main(void)
{
	int d0, d1, d2, a;

	d0 = '0';
	d1 = '1';
	d2 = '2';
	a = 1;

	while (d0 <= '7' && d1 <= '8' && d2 <= '9')
	{
		if (!(d0 == d1 && d0 == d2))
		{
			putchar(d0);
			putchar(d1);
			putchar(d2);

			if (!(d0 == '7' && d1 == '8' && d2 == '9'))
			{
				putchar(',');
				putchar(' ');
			}
		}

		if (d2 == '9')
		{
			d2 = '0' + a++;
			d1++;
			d0++;
		}
		else
			d2++;
	}
	putchar('\n');

	return (0);
}
