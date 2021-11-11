#include "main.h"
#include <stdio.h>
#include <limits.h>

int main(void)
{
	int len, len2;

	len = _printf("%c", '\0');
	len2 = printf("%c", '\0');

	printf("%d %d", len, len2);
	return (0);

}
