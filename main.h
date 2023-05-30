#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int _printf(const char *format, ...);
int _putchar(char c);
int print_char(va_list ptr);
int print_string(va_list ptr);
int print_int(va_list ptr);
int print_percent(void);

#endif
