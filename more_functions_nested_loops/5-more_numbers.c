#include "main.h"
/**
 * more_numbers(void) - print 10 time 1 to 14
 * Return : 0
 */
void more_numbers(void)
{
	char i;
	char j;

	for (i = '0'; i <= '10'; i++)
	{
		for (j = '0'; j <= '14'; j++)
		{
			_putchar (j);
		}
		_putchar('\n');
	}
}
