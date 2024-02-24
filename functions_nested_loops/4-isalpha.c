#include "main.h"
/**
 * _isalpha - Checks if a character is lowercase or uppercase
 * @c: character to check
 * Return: 1 if character is lowercase, 0 otherwise.
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
