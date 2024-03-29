#include "main.h"
#include <stddef.h>

/**
 * _strchr - Returns a pointer to the first occurrence of the
 * character c in the string s, or NULL if the character is not found
 * @s: stirng
 * @c: character
 * Return: null
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; (s[i] != c) && (s[i] != '\0'); i++)
		;
	if (s[i] == c)
		return (s + i);
	else
		return (NULL);
}
