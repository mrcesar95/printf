#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>
#inlcude <stdlib.h>
#include <string.h>

int _printf(const char *format, ...);

/**
 * struct format - this is a typedef struct.
 *@op: pointer type char.
 *@f: Pointer to call the function.
 */

typedef struct formot
{
	char *op;
	char *(*f)(va_list va);
} op_t;


#enfif
