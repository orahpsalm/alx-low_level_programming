#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 * Return: void
 */
void rev_string(char *s)
{
	int i = 0;
	
	while (s[i] != '\0')
		i++;
	while (i > 0)
	{
		s[i] = s[i-1];
		i--;
	}
}
