#include <unistd.h>

/**
* main - Entry point
* Description: Prints a message to standard error
* Return: 1 (Error)
*/

int main(void)
{
char msg[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
write(STDERR_FILENO, msg, sizeof(msg) - 1);
return (1);
}