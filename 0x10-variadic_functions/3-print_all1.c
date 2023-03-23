#include "variadic_functions.h"
#include <stdio.h>
#include <stddef.h>

/**
* print_char - prints a char
* @valist: list of arguments
*/
void print_char(va_list valist)
{
	_putchar(va_arg(valist, int));
}

/**
* print_int - prints an int
* @valist: list of arguments
*/
void print_int(va_list valist)
{
	printf("%d", va_arg(valist, int));
}

/**
* print_float - prints a float
* @valist: list of arguments
*/
void print_float(va_list valist)
{
	printf("%f", va_arg(valist, double));
}

/**
* print_string - prints a string
* @valist: list of arguments
*/
void print_string(va_list valist)
{
	char *str = va_arg(valist, char *);

	if (str == NULL)
		printf("(nil)");
	else
		printf("%s", str);
}

/**
* print_all - prints anything
* @format: list of types of arguments passed to the function
*/
void print_all(const char * const format, ...)
{
	va_list valist;
	int i = 0, j = 0;
	char *sep = "";
	char *str;

	format_t f[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string},
		{NULL, NULL}
	};

	va_start(valist, format);

	while (format && format[i])
	{
		j = 0;

		while (f[j].type)
		{
			if (format[i] == *(f[j].type))
			{
				printf("%s", sep);
				f[j].f(valist);
				sep = ", ";
				break;
			}

			j++;
		}

		i++;
	}

	va_end(valist);

	printf("\n");
}

