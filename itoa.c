#include "main.h"
/* 0x11. C - printf */


/**
 * _reverse - Reverse a string
 * @str: String to reverse
 * @len: lenght of the String
 *
 * Return: void
 */
void _reverse(char *str, int len)
{
	int a, b;
	char temp;

	for (a = 0, b = len - 1; a < b; a++, b--)
	{
		temp = *(str + a);
		*(str + a) = *(str + b);
		*(str + b) = temp;
	}
}

/**
 * _itoa - Converts number to a String
 * @n: Number to convert
 * @str: String to put the convertion
 * @base: Base of the number
 *
 * Return: char
 */
char *_itoa(int n, int base)
{
	int i, temp;
	int sig, len;
	char *str;
	unsigned num;

	temp = n;
	len = 0;
	while (temp)
	{
		temp = temp / base;
		len++;
	}

	i = 0;
	sig = 0;

	str = malloc(sizeof(char) * (len + 1));

	if (n == 0)
	{
		*str = '0';
		*(str + 1) = '\0';
		return str;
	}

	if (n < 0 && base == 10)
	{
		sig = 1;
		num = n * (-1);
	}
	else
		num = n;

	while (num != 0)
	{
		temp = num % base;
		*(str + i++) = (temp > 9)? (temp-10) + 'A' : temp + '0';
		num = num / base;
	}

	if (sig == 1)
		*(str + i++) = '-';

	*(str + i) = '\0';

	_reverse(str, i);


	return (str);
}
