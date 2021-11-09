# printf

In this project we are going to recreate the C standard library **printf** function as a part of the curriculum of software engineering for the low-level programming module at [Holberton School](https://www.holbertoncolombia.com/).

### Description

Our _printf function has as prototype :

> int _printf(const char *format, ...);

### C language standard functions allowed:

- write (man 2 write)
- va_start (man 3 va_start)
- va_end (man 3 va_end)
- va_arg (man 3 va_arg)

### Compilation

Our code is compiled this way:

```
$ gcc -Wall -Werror -Wextra -pedantic *.c
```

All our files are tested using the Betty style.

### Usage

To use the printf function you simply need to compile all files .c including the header main.h with a main function.

##### Example:

###### main.c

```
#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int len;
    int len2;
    unsigned int ui;
    void *addr;

    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    ui = (unsigned int)INT_MAX + 1024;
    addr = (void *)0x7ffe637541f0;
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    _printf("Negative:[%d]\n", -762534);
    printf("Negative:[%d]\n", -762534);
    _printf("Unsigned:[%u]\n", ui);
    printf("Unsigned:[%u]\n", ui);
    _printf("Unsigned octal:[%o]\n", ui);
    printf("Unsigned octal:[%o]\n", ui);
    _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");
    _printf("Address:[%p]\n", addr);
    printf("Address:[%p]\n", addr);
    len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);
    _printf("Unknown:[%r]\n");
    printf("Unknown:[%r]\n");
    return (0);
}
```

###### Compilation:

```
$ gcc *.c -o
```

###### Output:

```
Let's try to printf a simple sentence.
Let's try to printf a simple sentence.
Length:[39, 39]
Length:[39, 39]
Negative:[-762534]
Negative:[-762534]
Unsigned:[2147484671]
Unsigned:[2147484671]
Unsigned octal:[20000001777]
Unsigned octal:[20000001777]
Unsigned hexadecimal:[800003ff, 800003FF]
Unsigned hexadecimal:[800003ff, 800003FF]
Character:[H]
Character:[H]
String:[I am a string !]
String:[I am a string !]
Address:[0x7ffe637541f0]
Address:[0x7ffe637541f0]
Percent:[%]
Percent:[%]
Len:[12]
Len:[12]
Unknown:[%r]
Unknown:[%r]
```

### Return of _printf

In case of success _printf returns an integer value, wich is the total number of printed characters. Otherwise, _printf returns -1 (error).

### Format tags

Format tags used in _printf :

| Specifiers | Printed As                |
| ---------- | ------------------------- |
| c          | characters                |
| s          | string of characters      |
| d or i     | int to signed decimal     |
| R          | string to rot 13          |
| r          | reversed string           |
| b          | int to binary             |
| %          | no conversion, writes '%' |

For more informations about format specifier check it in the *C Programming Language* book, page 126, 2nd Edition of: Brian W. Kernighan and Dennis M. Ritchie

### Files and Description

| File                | Description                             |
| ------------------- | --------------------------------------- |
| main.h              | Header file contains all the prototypes |
| functions.c         | Contain functions for (c, s, i, d, %)   |
| 2_print_functions.c |                                         |
|                     |                                         |
|                     |                                         |
|                     |                                         |
| printf.c            | The printf function                     |

### Authors

- Cesar Molina(https://github.com/mrcesar95)
- Felipe Leon(https://github.com/pipeleon)
