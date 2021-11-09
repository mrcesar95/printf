#include "main.h"
#include <stdio.h>
#include <limits.h>

int main(void)
{
	_printf("%d\n", INT_MIN);
	_printf("%i\n", INT_MIN);
	_printf("%s\n", "this works");
	_printf("%c\n", 49);
	_printf("%%\n");
	_printf("%K\n");
	return (0);
}
