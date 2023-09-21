#include "monty.h"

/**
 * error_malloc - Handles malloc errors.
 * @line_number: The line number where the error occurred.
 */
void error_malloc(unsigned int line_number)
{
	printf("L%d: Error: malloc failed\n", line_number);
	exit(EXIT_FAILURE);
}

/**
 * error_unknown_instruction - Handles unknown instructions.
 * @line_number: The line number where the error occurred.
 * @opcode: The invalid opcode.
 */
void error_unknown_instruction(unsigned int line_number, char *opcode)
{
	printf("L%d: unknown instruction %s\n", line_number, opcode);
	exit(EXIT_FAILURE);
}

/**
 * error_file_open - Handles file open errors.
 */
void error_file_open(void)
{
	printf("Error: Can't open file\n");
	exit(EXIT_FAILURE);
}

