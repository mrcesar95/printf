#include "main.h"

/* 0x11. C - printf */

/**
 *_printf - print anything
 *@format: takes in format specifier
 *
 *Return: the number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list ap;
	int i, j, k, cont;
	char *buffer, *temp;
	op_t get_op[] = { {"b", get_binary}, {"c", get_char}, {"s", get_str},
			  {"%", get_percent}, {"i", get_number}, {"d", get_number}, {NULL, NULL} };

	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	buffer = malloc(sizeof(char) * 2048);
	if (buffer == NULL)
		return (-1);
	i = 0, cont = 0, va_start(ap, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			for (j = 0; j < 12; j++)
				if (format[i] == get_op->op[j])
					break;
			if (j == 12)
				i--, buffer[cont] = format[i], cont++;
			else
			{
				temp = (get_op[j / 2].f)(ap), k = 0;
				if (temp == NULL)
					break;
				while (temp[k] != '\0')
					buffer[cont] = temp[k], cont++,	k++;
				if (j == 0 || j == 6 || j == 8)
					free(temp);
			}
		}
		else
			buffer[cont] = format[i], cont++;
		i++;
	}
	write(1, buffer, cont),	free(buffer), va_end(ap);
	return (cont);
}
