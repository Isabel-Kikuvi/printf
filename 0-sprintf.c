#include <stdio.h>
#include <stdarg.h>
#include "main.h"
#include "print_binary.c"

/**
 * _printf - handles 'c' and 's' format specifiers
 * @format: string of characters
 * Return: number of 'prints'
 */

int _printf(const char *format, ...)
{
	int count = 0, i;
	va_list list;
	char c, *str;

	va_start(list, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			i++;
			switch (format[i])
			{
				case 'c':
				{
					c = (char)va_arg(list, int);
					_putchar(c);
					count++;
					break;
				}
				case 's':
				{
					int j = 0;

					str = va_arg(list, char*);
					while (*str != '\0')
					{
						_putchar(str[j]);
						count++;
						j++;
					}
				}
			}
		}
		else
		{
			_putchar(*format);
			count++;
		}
	}
	return (count);
}
