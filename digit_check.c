#include "monty.h"

/**
 * _isdigit - checks digit
 * @c: char
 * Return: 1 or 0
*/
int _isdigit(int c)
{
	if ((c >= 48 && c <= 57) || c == '-')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

/**
 * isinteger - checks integer
 * @str: string
 * Return: 0 or 1
*/
int isinteger(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (_isdigit(str[i]) == 0)
			return (0);
		i++;
	}
	return (1);
}

