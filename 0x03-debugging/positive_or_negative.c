# include "main.h"

/**
 * positive_or_negative - checks positive or negative numbers
 *
 * @i: number to be checked
 *
 * Return: always 0
 */

void positive_or_negative(int i)
{
	if (i < 0)
		printf("%d is negative", i);
	else
		printf("%d is positive", i);
}
