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
	while (src[j] != '\0' && j > i)
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}
