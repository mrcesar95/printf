#include "main.h"

/* Functions 0x11. C - printf */

/**
 * get_char - Takes va_list and return a string
 * @va: va_list
 *
 * Return: char
 */
char *get_char(va_list va)
{
	char *c;
	char a;

	a = va_arg(va, int);
	c = malloc(sizeof(char));
	*c = a;

	return (c);
}


/**
 * get_str - Takes va_list and return a string
 * @va: va_list
 *
 * Return: char
 */
char *get_str(va_list va)
{
	char *c;

	c = va_arg(va, char *);

	return (c);
}


/**
 * get_percent - Takes va_list and return a string
 * @va: va_list
 *
 * Return: char
 */
char *get_percent(va_list va __attribute__((unused)))
{
	char *c;

	c = 0 + "%";

	return (c);
}

/**
 * get_number - Takes va_list and return a string
 * @va: va_list
 *
 * Return: char
 */
char *get_number(va_list va)
{
	int i;
	char *c;

	i = va_arg(va, int);
	c = _itoa(i, 10);

	return (c);
}
