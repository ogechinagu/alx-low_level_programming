#include "main.h"
/**
*_strlen - finds the length of a string
*@s: pointer to the string
*Return: the length of the string
*/
int _strlen(char *s)
{
	int p = 0;

	while (*s != '\0')
	{
		p++;
		s++;
	}
	return (p);
}
