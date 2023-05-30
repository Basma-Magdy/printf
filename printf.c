#include "main.h"
/**
* _printf - A function that produces output according to a format
* Return: number of printed bytes or (-1) if error occurs
* @format: constant pointer to a character string
*/
int _printf(const char *format, ...)
{
va_list ptr;
int i, r;
r = 0;

if (format == NULL)
return (-1);

va_start (ptr, format);

for (i = 0; format[i] != '\0'; i++)
{
	if (format[i] != '%')
	{
		_putchar(format[i]);
	}

	else
	{
	i++;
	switch (format[i])
	{
	case 'c': r += print_char(ptr);
			break; 
	case 's': r += print_string(ptr);
			break;
	case 'd': r += print_int(ptr);
			break;
	case 'i': r += print_int(ptr);
			break;
	case '%': r += print_percent();
			break;
	default: print_percent();
		 _putchar(format[i]);
	}
	}
}

va_end(ptr);
return (i - 1);
}
