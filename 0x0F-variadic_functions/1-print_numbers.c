#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a new line.
 * @separator: is the string to be printed between numbers
 * @n: number of params
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;

	if (n == 0)
		return;

	va_start(valist, n);

	if (separator != NULL)
	{
		for (i = 0; i < n - 1; i++)
			printf("%d%s", va_arg(valist, int), separator);
		printf("%d", va_arg(valist, int));
	}
	else
	{
		for (i = 0; i < n; i++)
			printf("%d", va_arg(valist, int));
	}
	va_end(valist);

	printf("\n");
}
