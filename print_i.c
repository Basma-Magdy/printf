#include "main.h"
/**
 * print_i - entry point
 * @val: arguments
 * Return: number of characters printed
 */
int print_i(va_list val)
{ 
        int n = va_arg(val, int);
	int num, m = n % 10, digit, exp = 1;
	int  i = 1;
        n = n / 10;
	num = n;

	if (m < 0)
	{
		_putchar('-');
		num = -num;
		n = -n;
		m = -m;
		i++;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			exp = exp * 10;
			num = num / 10;
		}
		num = n;
		while (exp > 0)
		{
			digit = num / exp;
			_putchar(digit + '0');
			num = num - (digit * exp);
			exp = exp / 10;
			i++;
		}
	}
	_putchar(m + '0');

	return (i);
}
