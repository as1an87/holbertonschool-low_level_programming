#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - function that prints all
 * @format: format
 *
 */

void print_all(const char * const format, ...)
{
	va_list args;
	va_start(args, format);

	char *separator = "";
	int i = 0;
	char c;
	char *s;
	float f;

	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				c = va_arg(args, int);
				printf("%s%c", separator,c);
				break;
			case 'i':
				printf("%s%d", separator, va_arg(args, int));
				break;
			case 'f':
				printf("%s%f", separator, va_arg(args, double));
				break;
			case 's':
				if (s == NULL)
					printf("%s(nil)", separator);
				else
					printf("%s%s", separator, s);
				break;
			default :
				break;
		}
		separator = ", ";
		i++;
	}
	va_end(args);
	printf("\n");
}
