#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int _printf(const char *format, ...);

/**
 * struct format - this is a typedef struct.
 *@op: pointer type char.
 *@f: Pointer to call the function.
 */

typedef struct format
{
	char *op;
	char *(*f)(va_list va);
} op_t;

char *get_char (va_list va);
char *get_str (va_list va);
char *get_number (va_list va);
char *get_percent (va_list va);



#endif
