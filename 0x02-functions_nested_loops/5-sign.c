#include "main.h"
/**
 * print_sign - function that prints sings
 *
 * @n: parameter
 *
 * Return: 1 it is greater
 * and 0 it equals 0
 * and -1 it is less
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		_putchar(',');
		_putchar(' ');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
		_putchar(',');
		_putchar(' ');
		return (-1);
	}
	return (1);
}
