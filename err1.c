#include "monty.h"

/**
 * ead - Exit with an error
 * @stack: Pointer to the stack
 * @line_num: Line number
 */
void ead(stack_t **stack, unsigned int line_num)
{
	fprintf(stderr, "L%u: can't add, stack too short\n", line_num);
	fclose(gbl.file_read);
	fd(*stack);
	exit(EXIT_FAILURE);
}

/**
 * esb - Exit with an error
 * @stack: Pointer to the stack
 * @line_num: Line number
 */
void esb(stack_t **stack, unsigned int line_num)
{
	fprintf(stderr, "L%u: can't sub, stack too short\n", line_num);
	fclose(gbl.file_read);
	fd(*stack);
	exit(EXIT_FAILURE);
}

/**
 * eml - Exit with an error
 * @stack: Pointer to the stack
 * @line_num: Line number
 */
void eml(stack_t **stack, unsigned int line_num)
{
	fprintf(stderr, "L%u: can't mul, stack too short\n", line_num);
	fclose(gbl.file_read);
	fd(*stack);
	exit(EXIT_FAILURE);
}

/**
 * edv - Exit with an error
 * @stack: Pointer to the stack
 * @line_num: Line number
 */
void edv(stack_t **stack, unsigned int line_num)
{
	fprintf(stderr, "L%u: can't div, stack too short\n", line_num);
	fclose(gbl.file_read);
	fd(*stack);
	exit(EXIT_FAILURE);
}

/**
 * emd - Exit with an error
 * @stack: Pointer to the stack
 * @line_num: Line number
 */
void emd(stack_t **stack, unsigned int line_num)
{
	fprintf(stderr, "L%u: can't mod, stack too short\n", line_num);
	fclose(gbl.file_read);
	fd(*stack);
	exit(EXIT_FAILURE);
}
