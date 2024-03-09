#include "main.h"
/**
 * _print_rev_recursion - print rev s
 * @s: string
 */
void _puts_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
