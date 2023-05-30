#include "main.h"
/**
* print_string - entry point
* Return: success
* @input: input data string
*/
int print_string(va_list input)
{
char *str;
int len, i;
len = 0;

str = va_arg(input, char *);

if (str == NULL)
str = "(null)";

len = _strlen(str);

for (i = 0; i < len; i++)
{
	_putchar(str[i]);
}

return (len);
}

