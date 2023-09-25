#include "main.h"
#include <stddef.h>
/**
 * _strchr - a function that locates a character in a string
 *
 * @s: string
 * @c: character
 *
 * Return: char or NULL
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
	}
	s++;

	return (NULL);
}
