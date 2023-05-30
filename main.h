#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

int _strlen(char *s);
int _printf(const char *format, ...);
int _putchar(char c);
int print_char(va_list ptr);
int print_string(va_list ptr);
int print_i(va_list ptr);
int print_dec(va_list ptr);
int print_percent(void);
int print_binary(va_list in);

#endif
