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

	op_t get_op[] = {
		{"c", get_char},
		{"s", get_str},
		{"%", get_percent},
		{"i", get_number},
		{"d", get_number},
		{NULL, NULL}
		};

	buffer = malloc(sizeof(char) * 2048);

	if (format == NULL)
		return (-1);


	i = 0;
	cont = 0;
	va_start(ap, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			j = 0;
			while (j < 12)
			{
				if (format[i] == get_op->op[j])
					break;
				j++;
			}
			if (j == 11 && format[i + 1] == '\0')
				return (-1);
			if (j == 11 && format[i + 1] != '\0')
			{
				buffer[cont] = format[i];
				cont++;
			}
			else
			{
				temp = (get_op[j / 2].f)(ap);
				j = 0;
				while (temp[j] != '\0')
				{
					buffer[cont] = temp[j];
					cont++;
					j++;
				}
			}
		}
		else
		{
			buffer[cont] = format[i];
			cont++;
		}
		i++;
	}

	write(1, buffer, cont);

	free(buffer);
	va_end (ap);

	return (cont);
}
