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
	int i, j, k;
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
			if (format[i + 1] == '\0')
				break;
			i++;
			j = 0;
			while (j < 10)
			{
				if (format[i] == get_op->op[j])
					break;
				j++;
			}
			/*printf("El numero de posicion es %d\n", j);*/

			if (j == 10)
			{
				i--;
				buffer[cont] = format[i];
				cont++;
			}
			else
			{
				temp = (get_op[j / 2].f)(ap);
				if (temp == NULL)
					break;
				k = 0;
				while (temp[k] != '\0')
				{
					buffer[cont] = temp[k];
					cont++;
					k++;
				}
				if (j == 0 || j == 6 || j == 8)
					free(temp);
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
