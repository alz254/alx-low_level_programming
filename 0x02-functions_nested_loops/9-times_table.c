#include "main.h"

/**
 * times_table - print from 0 to 9 times table
 *
 * Return: Nothing
 */


void times_table(void)
{
	int i, j, b;

	for (i = 0; i <= 9; i++)
	{
		_putchar('0');
		for (j = 1; j <= 9; j++)
		{
			_putchar(',');
			_putchar(' ');
			b = i * j;

			if (b > 9)
				_putchar('0' + b / 10);
			else
				_putchar(' ');

			_putchar('0' + b % 10);
		}
		_putchar('\n');
	}
}
