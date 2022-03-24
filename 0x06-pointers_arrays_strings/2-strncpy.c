#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: destination char variable
 * @src: source char variable
 * @n: number of bytes from src
 * Return: copied string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
