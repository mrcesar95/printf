#include "main.h"

/* 0x11. C - printf */

/**
 *printf - print anything
 *@format: takes in format specifier
 *
 *Return: the number of characters printed (excluding the null byte used to end output to strings)
 */
int _printf(const char *format, ...);
{
	va_list ap;
	int i, j;
	int count;
	char *buffer;

	buffer = malloc(sizeof(char * 1024);

	format_t get_opt[]= {
		{"c", set_char},
		{"s", set-string},
		{"i", set_decimal},
		{"d", set_decimal},
		{"%", print_percent},
	};

	if (format == NULL)
	{
		return (-1);
	}
			
