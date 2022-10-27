#include "main.h"
/**
 * puts_half - prints half of a string
 * @str: the input
 */
void puts_half(char *str)
{
	int p = 0;

	while (*str != '\0')
	{
		p++;
		str++;
	}

	str -= (p / 2);
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
