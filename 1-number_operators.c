#include "main.h"

/**
 * print_d - prints base 10 digits
 * @list: stores the value of the arguments
 * Return: count print numbers
 */

int print_d(va_list list)
{
	unsigned int num_Abs, aux_Num, count_Zero, count;
	int numbers;

	count = 0;

	numbers = va_arg(list, int);

	if (numbers < 0)
	{
		num_Abs = (numbers * -1);
		count += _putchar(45);
	}
	else
		num_Abs = numbers;

	aux_Num = num_Abs;
	count_Zero = 1;
	while (aux_Num > 9)
	{
		aux_Num /= 10;
		count_Zero *= 10;
	}

	while (count_Zero >= 1)
	{
		count += _putchar(((num_Abs / count_Zero) % 10) + '0');
		count_Zero /= 10;
	}
	return (count);

}

/**
 * print_i - prints integers
 * @list: stores list of numbers
 * Return: Number print
 */

int print_i(va_list list)
{
	return (print_d(list));
}
