#include "main.h"
/**
 * more_numbers(void) - print 10 time 1 to 14
 * Return : 0
 */
void more_numbers(void)
{
	int i, j;

	for (i = 1; i <= 10; i++)
	{
		for  (j = 0; j <= 14; j++)
		{
			_putchar (j % '100');
		}
		_putchar('\n');
	}
}
