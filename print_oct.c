#include "main.h"

/**
 * print_oct - prints an octal number.
 * @arg: arguments.
 * Return: counter.
 */
int print_oct(va_list arg)
{
	int x;
	int *arr;
	int count = 0;
	unsigned int num = va_arg(arg, unsigned int);
	unsigned int temp = num;

	while (num / 8 != 0)
	{
		num /= 8;
		count++;
	}
	count++;
	arr = malloc(count * sizeof(int));

	for (x = 0; x < count; x++)
	{
		arr[x] = temp % 8;
		temp /= 8;
	}
	for (x = count - 1; x >= 0; x--)
	{
		_putchar(arr[x] + '0');
	}
	free(arr);
	return (count);
}
