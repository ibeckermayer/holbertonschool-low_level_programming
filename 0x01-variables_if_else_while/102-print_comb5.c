#include <stdio.h>

/**
 * main - prints all possible different combinations of three digits.
 * Return: 0
 */
int main(void)
{
	int d0, d1, d2, d3;

	d0 = d1 = d2 = d3 = '0';
	while (!(d0 == '9' && d1 == '9' && d2 == '9' && d3 == '9'))
	{
		if (d2 >= d0 && d3 > d1)
		{
			putchar(d0);
			putchar(d1);
			putchar(' ');
			putchar(d2);
			putchar(d3);
			if (!(d0 == '9' && d1 == '8' && d2 == '9' && d3 == '9'))
			{
				putchar(',');
				putchar(' ');
			}
		}
		if (d2 == '9' && d3 == '9')
		{
			if (d1 == '9')
			{
				d1 = '0';
				d0++;
			}
			else
				d1++;
		}
		if (d3 == '9')
		{
			d3 = '0';
			if (d2 == '9')
			{
				d2 = '0';
			}
			else
				d2++;
		}
		else
			d3++;
	}
	putchar('\n');
	return (0);
}
