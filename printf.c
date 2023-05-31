#include "main.h"
/**
* select_specifier - to selected requested specifier
* @p: pointer to arguments
* @i: iterated index
* @form: pointer to input format
* Return: the length of input data as integer value
*/

int select_specifier(va_list p, int i, const char *form)
{
int length;
length = 0;

switch (form[i])
{
	case 'c':
		length = print_char(p);
		break;
	case 's':
		length = print_string(p);
		break;
	case 'd':
		length = print_dec(p);
		break;
	case 'i':
		length = print_i(p);
		break;
	case '%':
		length = print_percent();
		break;
	case 'b':
		length = print_binary(p);
		break;
	case 'x':
		length = print_hex(p);
		break;
	case 'o':
                length = print_oct(p);
                break;
	default:
		print_percent();
		_putchar(form[i]);
}

return (length);
}

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

if (format == NULL || (format[0] == '%' && format[1] == '\0'))
return (-1);

va_start(ptr, format);

for (i = 0; format[i] != '\0'; i++)
{
	if (format[i] != '%')
	{
		_putchar(format[i]);
	}
	else
	{
		i++;
		len += select_specifier(ptr, i, format);
	}
}
len += i - 2;
va_end(ptr);
return (len);
}
