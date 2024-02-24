#include "main.h"
/**
 * _islower - Checks if a character is lowercase.
 * @c: character to check
 * Return: 1 if character is lowercase, 0 otherwise.
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else if (c >= 'A' && c<= 'Z')
		return (1);
	else
		return (0);
}
