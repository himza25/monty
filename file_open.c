#include "monty.h"

/**
 * file_open - Opens a Monty bytecode file.
 * @filename: The name of the file to be opened.
 *
 * Return: A pointer to the file.
 */
FILE *file_open(const char *filename)
{
	FILE *fp;

	fp = fopen(filename, "r");
	if (fp == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", filename);
		exit(EXIT_FAILURE);
	}

	return (fp);
}

