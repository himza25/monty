#include "monty.h"

/**
 * emth - exit with error for math operations
 * @stack: pointer to stack
 * @line_num: line number
 */
void emth(stack_t **stack, unsigned int line_num)
{
	fprintf(stderr, "L%u: division by zero\n", line_num);
	fclose(gbl.file_read);
	fd(*stack);
	exit(EXIT_FAILURE);
}

/**
 * epc1 - exit with error for empty stack on pchar
 * @stack: pointer to stack
 * @line_num: line number
 */
void epc1(stack_t **stack, unsigned int line_num)
{
	fprintf(stderr, "L%u: can't pchar, stack empty\n", line_num);
	fclose(gbl.file_read);
	fd(*stack);
	exit(EXIT_FAILURE);
}

/**
 * epc2 - exit with error for non-character on pchar
 * @stack: pointer to stack
 * @line_num: line number
 */
void epc2(stack_t **stack, unsigned int line_num)
{
	fprintf(stderr, "L%u: can't pchar, value out of range\n", line_num);
	fclose(gbl.file_read);
	fd(*stack);
	exit(EXIT_FAILURE);
}

/**
 * em - exit with memory error
 * @stack: pointer to stack
 * @line_num: line number
 */
void em(stack_t **stack, unsigned int line_num)
{
	(void)line_num;

	fprintf(stderr, "Error: malloc failed\n");
	fclose(gbl.file_read);
	fd(*stack);
	exit(EXIT_FAILURE);
}
