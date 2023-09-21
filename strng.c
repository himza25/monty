#include "monty.h"

/**
 * di - checks if character is a digit
 * @c: character
 * Return: 1 if true, 0 if false
*/
int di(int c)
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
 * isi - checks if string is integer
 * @str: string
 * Return: 0 if not integer
*/
int isi(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (di(str[i]) == 0)
			return (0);
		i++;
	}
	return (1);
}
