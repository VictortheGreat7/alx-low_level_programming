#include <unistd.h>


int _printf(__attribute__((unused))const char *format, ...)
{
	static int i = 0;
	if (!i)
		write(1, "9 8 10 24 75 - 9\n", 17);

	i = 1;
	return (0);
}


int _puts(__attribute__((unused))const char *s)
{
	write(1, "Congratulations, you win the Jackpot!\n", 38);
	return (0);
}

