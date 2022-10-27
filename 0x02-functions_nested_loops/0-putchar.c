#include "main.h"

/**
 * main - print _putchar
 * Return: 0
 */
int main(void)
{
	char x[10] = "_putchar";

	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(x[i]);
	}
	_putchar(10);
	return (0);
}
