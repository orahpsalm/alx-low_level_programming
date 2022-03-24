#include "main.h"

/**
 * _strcat - concatenates two strings.
 * @dest: destination char
 * @src: source char
 * Return: new char
 */
char *_strcat(char *dest, char *src)
{
	int j, i = 0;

	while (dest[i] != '\0')
		i++;
	for (j = 0, j < i && src[j] != '\0'; j++)
		dest[i + 1] = src[j];
	dest[i + j] = '\0';
	return (dest);
}
