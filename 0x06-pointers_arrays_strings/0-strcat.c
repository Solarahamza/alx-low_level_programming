#include "main.h"

/**
 * _strcat - a function that concatenates two strings.
 *
 * @dest: first parameter
 * @src: second parametere that will be appended to first.
 *
 * Return: char dest appended
 */
char *_strcat(char *dest, char *src)
{
	int destlen = 0;
	int first_vr_src;

	while (dest[destlen])
		destlen++;

	for (first_vr_src = 0; src[first_vr_src]; first_vr_src++)
		dest[destlen++] = src[first_vr_src];

	return (dest);
}
