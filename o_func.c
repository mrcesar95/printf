#include "main.h"

/* Functions 0x11. C - printf */

/**
 * rot13 - Encodes a string using rot13
 * @a: String to encode
 * Description: Encodes a string using rot13
 * Return: char
 */

char *rot13(char *a)
{
	int i;
	int j;
	char let[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGJIJKLMNOPQRSTUVWXYZ";
	char rot[52] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGJIJKLM";

	for (i = 0; *(a + i) != '\0'; i++)
		for (j = 0; j < 52; j++)
			if (*(a + i) == let[j])
			{
				*(a + i) = rot[j];
				break;
			}

	return (a);
}

/**
 * get_rot - Takes va_list and return a string
 * @va: va_list
 *
 * Return: char
 */
char *get_rot(va_list va)
{
	char *c;
	char *r;

	c = va_arg(va, char *);

	r = rot13(c);

	return (r);
}

/**
 * get_rev - Takes va_list and return a string
 * @va: va_list
 *
 * Return: char
 */
char *get_rev(va_list va)
{
	char *c;
	int len;

	c = va_arg(va, char *);

	len = 0;
	while (*(c + len) != 0)
		len++;

	_reverse(c, (len + 1));

	return (c);
}

/**
 * get_binary - Takes va_list and return a string
 * @va: va_list
 *
 * Return: char
 */
char *get_binary(va_list va)
{
	int i;
	char *c;

	i = va_arg(va, int);
	c = _itoa(i, 2);

	if (c == NULL)
		return (NULL);
	return (c);
}
