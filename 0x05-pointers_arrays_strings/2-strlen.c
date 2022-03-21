#include "main.h"

/**
 * _strlen - returns length of a string
 * @s - string
 * Return: Length of string
 */
int _strlen(char *s)
{
	int len;

	len = 0;
	while (*s != '\0')
		len++;
	return (len);
}
