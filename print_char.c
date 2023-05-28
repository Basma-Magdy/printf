#include "main.h"
/**
* print_char - entry point
* Return: success
* @arg: input data string
*/
int print_char(va_list arg)
{
char str;

str = va_arg(arg, int);
_putchar(str);

return(1);
}
