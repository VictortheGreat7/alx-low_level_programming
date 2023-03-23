#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>

/**
* struct print_type - struct to store type and corresponding function to print
* @type: the character representing the type
* @func: pointer to the function to print the corresponding type
*/
typedef struct print_type
{
	char type;
	void (*func)(va_list);
} print_type_t;

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif

