#include "main.h"

int _atoi(char *s)
{
int n = 0, sign = 1;

while (*s == ' ' || (*s >= '\t' && *s <= '\r'))
s++;

if (*s == '+' || *s == '-')
{
if (*s == '-')
sign = -1;
s++;
}

while (*s >= '0' && *s <= '9')
{
n = n * 10 + (*s - '0');
s++;
}

return (n * sign);
}
