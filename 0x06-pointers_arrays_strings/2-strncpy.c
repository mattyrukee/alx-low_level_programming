#include "main.h"

/**
 * strncpy - C function that copies a string, including the
 * terminating null bytes, using at most an inputted numver of bu=ytes.
 * @dest: buffer storig the string copy
 * @src: the sourcestring
 * @n: max number of bytes copied
 *
 * Return: returns value
 */

char *_strncpy(char *dest, char *src, int n);
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
