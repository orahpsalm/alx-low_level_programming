#include "main.h"

/**
 * _strlen_recursion - function that returns the
 * length of a string
 * @s: string whose length is to be returned
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (s[i] != '\0')
		return (1 + _strlen_recursion(s + 1));
	else
		return (0);
}
