#include "variadic_functions.h"
#include <stdarg.h>
/**
 *sum_them_all - sum of all its parameters
 *@n: unsigned int
 *Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int c, sum = 0;
	va_list ar;

	if (n == 0)
		return (0);

	va_start(ar, n);
	for (c = 0; c < n; c++)
		sum += va_arg(ar, int);
	va_end(ar);
	return (sum);
}
