#include "variadic_functions.h"

/**
 * print_all - prints anything.
 * @format: a list of types of arguments passed to the function
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	int n, i, valids, valids_used, was_valid;
	va_list valist;
	char *curstr;

	i = 0;
	valids = 0;
	n = 0;
	while (format != NULL && *(format + i))
	{
		n++;
		switch (*(format + i))
		{
		case 'c':
		case 'i':
		case 'f':
		case 's':
			valids++;
			break;
		default:
			break;
		}
		i++;
	}

	va_start(valist, format);

	i = 0;
	valids_used = 0;
	was_valid = 0;
	while (format != NULL && i < n)
	{
		switch (*(format + i))
		{
		case 'c':
			printf("%c", va_arg(valist, int));
			valids_used++;
			was_valid = 1;
			break;
		case 'i':
			printf("%d", va_arg(valist, int));
			valids_used++;
			was_valid = 1;
			break;
		case 'f':
			printf("%f", va_arg(valist, double));
			valids_used++;
			was_valid = 1;
			break;
		case 's':
			curstr = va_arg(valist, char *);
			was_valid = 1;
			valids_used++;
			if (curstr == NULL)
				curstr = "(nil)";
			printf("%s", curstr);
			break;
		default:
			was_valid = 0;
			break;
		}

		switch (was_valid)
		{
		case 1:
			if (valids_used != valids)
				printf(", ");
			break;
		default:
			break;
		}
		i++;
	}

	va_end(valist);
	printf("\n");
}
