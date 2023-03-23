#include "variadic_functions.h"    
#include <stdio.h>

/**
* print_char - prints a char
* @valist: the va_list containing the argument
*/
void print_char(va_list valist)
{
	char c = va_arg(valist, int);

	printf("%c", c);
}

/**
* print_int - prints an integer
* @valist: the va_list containing the argument
*/
void print_int(va_list valist)
{
	int i = va_arg(valist, int);

	printf("%d", i);
}

/**
* print_float - prints a float
* @valist: the va_list containing the argument
*/
void print_float(va_list valist)
{
	float f = va_arg(valist, double);

	printf("%f", f);
}

/**
* print_string - prints a string
* @valist: the va_list containing the argument
*/
void print_string(va_list valist)
{
	char *s = va_arg(valist, char *);

	if (s == NULL)
		printf("(nil)");
	else
		printf("%s", s);
}

/**
* print_all - prints anything
* @format: a list of types of arguments passed to the function
*/
void print_all(const char * const format, ...)
{
	va_list valist;
	int i = 0, j = 0;
	char *separator = "";

	print_type_t types[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_string},
		{'\0', NULL}
	};

	va_start(valist, format);

	while (format && format[i])
	{
		j = 0;
		while (types[j].func)
		{
			if (types[j].type == format[i])
			{
				printf("%s", separator);
				types[j].func(valist);
				separator = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(valist);
}

