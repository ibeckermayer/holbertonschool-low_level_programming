#include "variadic_functions.h"

/**
 * print_strings - prints strings, followed by a new line.
 * @separator: is the string to be printed between the strings
 * @n: number of params
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;
	char *curstr;

	if (n == 0)
	{
		printf("\n");
		return;
	}

	va_start(valist, n);

	if (separator != NULL)
	{
		for (i = 0; i < n - 1; i++)
		{
			curstr = va_arg(valist, char *);
			if (curstr != NULL)
				printf("%s%s", curstr, separator);
			else
				printf("%s%s", "(nil)", separator);
		}
		curstr = va_arg(valist, char *);
		if (curstr != NULL)
			printf("%s", curstr);
		else
			printf("%s", "(nil)");
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			curstr = va_arg(valist, char *);
			if (curstr != NULL)
				printf("%s", curstr);
			else
				printf("%s", "(nil)");
		}
	}
	va_end(valist);
	printf("\n");
}
