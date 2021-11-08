#include "main.h"

/* 0x11. C - printf */

/**
 *printf - print anything
 *@format: takes in format specifier
 *
 *Return: the number of characters printed (excluding the null byte used to end output to strings)
 */
int _printf(const char *format, ...)
{
	va_list ap;
	int i, j;
	int cont;
	char *buffer;
	char *temp;

	buffer = malloc(sizeof(char) * 1024);



	op_t get_opt[] = {
		{"c", set_char},
		{"s", set-string},
		{"i", set_decimal},
		{"d", set_decimal},
		{"%", print_percent},
		{NULL, NULL}
		};*/

	if (format == NULL)
	{
		return (-1);
	}

	i = 0;
	cont = 0;
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			j = 0;
			while (j < 10)
			{
				if (format[i + 1] == get_op->char[j])
					break;
				j++;
			}
			temp = (get_op->funt[j])(va_list);
			j = 0;
			while (temp[j] != '\0')
			{
				buffer[cont] = temp[j];
				cont++;
				j++;
			}
		}
		else
		{
			buffer[cont] = format[i];
			cont++;
		}
		i++;
	}
