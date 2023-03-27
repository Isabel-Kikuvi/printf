#include "main.h"
#include <stdarg.h>

/**
 * print_unsigned - prints unsigned ints
 * @list: contains the unsigned ints
 *
 * Return: number of characters printed
 */

int print_unsigned(va_list list)
{
	unsigned int num = va_arg(list, unsigned int);
	int count = 0;
	unsigned int divisor = 1;

	while (num / divisor >= 10)
		divisor *= 10;

	while (divisor != 0)
	{
		count += _putchar('0' + num / divisor);
		num %= divisor;
		divisor /= 10;
	}
	return (count);
}

/**
 * print_octal - prints an octal
 * @list: contains octals to print
 *
 * Return: number of characters printed
 */

int print_octal(va_list list)
{
	unsigned int num = va_arg(list, unsigned int);
	int count = 0;
	unsigned int oct = 0;
	int i = 1;

	while (num != 0)
	{
		oct += (num % 8) * i;
		num /= 8;
		i *= 10;
	}
	while (i > 1)
	{
		i /= 10;
		count += _putchar('0' + (oct / i));
		oct %= i;
	}
	return (count);
}

/**
 * print_hex - Prints the hexadecial of unsigned decimal
 *		in lowercase letters
 * @list: conaints hex to print
 *
 * Return: number of characters printed
 */

int print_hex(va_list list)
{
	unsigned int num = va_arg(list, unsigned int);
	int count = 0;
	char hex[100];
	int i = 0;
	int j, remainder;

	while (num != 0)
	{
		remainder = num % 16;
		if (remainder < 10)
			hex[i++] = '0' + remainder;
		else
			hex[i++] = 'a' + (remainder - 10);
		num /= 16;
	}
	for (j = i - 1; j >= 0; j--)
		count += _putchar(hex[j]);

	return (count);
}

/**
 * print_HEX - prints a hexadecimal in uppercase
 * @list: contains HEX to print
 *
 * Return: number of characters printed
 */

int print_HEX(va_list list)
{
	unsigned int num = va_arg(list, unsigned int);
	unsigned int divisor = 1;
	int count = 0;
	int digit;

	while (num / divisor > 15)
		divisor *= 16;

	while (divisor > 0)
	{
		digit = num / divisor;

		if (digit < 10)
			_putchar('0' + digit);
		else
			_putchar('A' + digit - 10);

	num %= divisor;
	divisor /= 16;
	count++;
	}

	return (count);
}
