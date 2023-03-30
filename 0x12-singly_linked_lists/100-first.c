#include <stdio.h>

/**
* before_main - function that prints a message before main is executed
*
* Return: void
*/
void __attribute__((constructor)) before_main()
{
printf("You're beat! and yet, you must allow,\n"
"I bore my house upon my back!\n");
}

