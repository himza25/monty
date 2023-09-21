#include "monty.h"

int global_variable;

/**
 * main - Main function for the Monty interpreter.
 * @argc: Argument count.
 * @argv: Argument vector.
 * Return: EXIT_SUCCESS on success, EXIT_FAILURE otherwise.
 */
int main(int argc, char **argv)
{
	FILE *fp;
	char *filename;
	stack_t *stack = NULL;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	filename = argv[1];
	fp = file_open(filename);

	if (fp == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", filename);
		exit(EXIT_FAILURE);
	}

	file_read(fp, &line, &len, &line_number, &stack);

	fclose(fp);

	free_stack(stack);

	return (EXIT_SUCCESS);
}
