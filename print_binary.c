#include "main.h"
/**
* print_binary - prints a binary number
* @in: input data
* Return: 1
*/
int print_binary(va_list in)
{
int len, i, x, y, f;
unsigned int p, val;
len = 0;
f = 0;
x = 1;

val = va_arg(in, unsigned int);

for (i = 0; i < 32; i++)
{
	p = ((x << (31 - i)) & val);

	if (p >> (31 - i))
	f = 1;

	if (f)
	{
	y = p >> (31 - i);
	_putchar(y + 48);
	len++;
	}
}

	if (!len)
	{
	len++;
	_putchar('0');
	}

return (len);
}
