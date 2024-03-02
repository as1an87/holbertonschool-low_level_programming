#include "main.h"
/**
 * print_line - print n time _
 * @n: n number of lines
 * Return :0
 */
void print_line(int n)
{
	int i = 0;

	while (i < n)
	{
		_putchar (95);
		i++;
	}
	_putchar ('\n');
}
