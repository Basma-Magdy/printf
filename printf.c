#include "main.h"
/**
* _printf - A function that produces output according to a format
* Return: number of printed bytes or (-1) if error occurs
* @format: constant pointer to a character string
*/
int _printf(const char *format, ...)
{
va_list ptr;
int i, len;
len = 0;

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
	case 'c': len += print_char(ptr);
			break; 
	case 's': len += print_string(ptr);
			break;
	case 'd': len += print_int(ptr);
			break;
	case 'i': len += print_int(ptr);
			break;
	case '%': len += print_percent();
			break;
	default: print_percent();
		 _putchar(format[i]);
	}
	}
}

va_end(ptr);
return (len);
}
