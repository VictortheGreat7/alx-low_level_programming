#include "main.h"

/**
* is_palindrome - checks if a string is a palindrome
* @s: pointer to the string
* Return: 1 if the string is a palindrome, 0 otherwise
*/
int is_palindrome(char *s)
{
int len = _strlen_recursion(s);
return (is_palindrome_helper(s, 0, len - 1));
}

/**
* is_palindrome_helper - helper function to check if a string is a palindrome
* @s: pointer to the string
* @start: starting index of the string
* @end: ending index of the string
* Return: 1 if the string is a palindrome, 0 otherwise
*/
int is_palindrome_helper(char *s, int start, int end)
{
if (start >= end)
return (1);
if (s[start] != s[end])
return (0);
return (is_palindrome_helper(s, start + 1, end - 1));
}

/**
* _strlen_recursion - Computes the length of a string recursively
* @s: pointer to the string
* Return: the length of the string
*/
int _strlen_recursion(char *s)
{
if (*s == '\0')
return (0);
return (1 + _strlen_recursion(s + 1));
}
