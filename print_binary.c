#include "main.h"

/**
 * print_binary - prints number in binary
 * @num: number to be printed
 */

void print_binary(unsigned int num)
{
	int i;

	for (i = 31; i >= i; i--)
	{
		if (num & (1 << i))
		{
			break;
		}
	}
	for (; i >= 0; i--)
	{
		if (num & (1 << i))
		{
			_putchar('1');
		}
		else
			_putchar('0');
	}
}
