#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int _printf(const char *format, ...);

/**
 * struct op - this is a typedef struct.
 *@op: pointer type char.
 *@f: Pointer to call the function.
 *
 * Description:
 */

typedef struct op
{
	char *op;
	char *(*f)(va_list va);
} op_t;

char *get_char(va_list va);
char *get_str(va_list va);
char *get_number(va_list va);
char *get_percent(va_list va);
char *get_rot(va_list va);
char *get_rev(va_list va);
char *get_binary(va_list va);

void _reverse(char *str, int len);
char *_itoa(int n, int base);
char *rot13(char *a);

#endif
