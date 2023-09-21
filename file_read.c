#include "monty.h"

/**
 * file_read - Reads a Monty bytecode file line by line.
 * @fp: The file pointer.
 * @line: The line buffer.
 * @len: The length of the line.
 * @line_number: The line number.
 * @stack: The stack.
 */
void file_read(FILE *fp, char **line, size_t *len, unsigned int *line_number, stack_t **stack)
{
	ssize_t nread;

	while ((nread = getline(line, len, fp)) != -1)
	{
		char *opcode;

		(*line_number)++;
		opcode = strtok(*line, "\n\t\r ");

		if (opcode == NULL || opcode[0] == '#')
			continue;

		opcode_exec(opcode, stack, *line_number);
	}
}

