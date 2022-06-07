#include "programming.h"

/**
 * main - debugging example
 * Return: 0
 */
int main(void)
{
	char *programming = "programming";

	while (*programming)
	{
		_putchar(*programming);
		programming++;
	}
	_putchar('\n');
	return (0);
}
