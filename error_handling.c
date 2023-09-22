/* error_handling.c */
#include "monty.h"

/**
 * error_push - Exits the program due to an invalid push operation.
 * @stack: Pointer to the stack.
 * @line_num: Line number where the error occurred.
 */
void error_push(stack_t **stack, unsigned int line_num)
{
	fprintf(stderr, "L%u: usage: push integer\n", line_num);
	free_dlistint(*stack);
	fclose(var1.file_read);
	exit(EXIT_FAILURE);
}

/**
 * error_unknown - Exits the program due to an unknown instruction.
 * @stack: Pointer to the stack.
 * @line_num: Line number where the error occurred.
 */
void error_unknown(stack_t **stack, unsigned int line_num)
{
	fprintf(stderr, "L%u: unknown instruction %s\n", line_num, var1.line_read);
	free_dlistint(*stack);
	fclose(var1.file_read);
	exit(EXIT_FAILURE);
}

/**
 * error_pint - Exits the program because the stack is empty for pint.
 * @stack: Pointer to the stack.
 * @line_num: Line number where the error occurred.
 */
void error_pint(stack_t **stack, unsigned int line_num)
{
	fprintf(stderr, "L%u: can't pint, stack empty\n", line_num);
	free_dlistint(*stack);
	fclose(var1.file_read);
	exit(EXIT_FAILURE);
}

/**
 * error_pop - Exits the program because the stack is empty for pop.
 * @stack: Pointer to the stack.
 * @line_num: Line number where the error occurred.
 */
void error_pop(stack_t **stack, unsigned int line_num)
{
	(void)**stack;

	fprintf(stderr, "L%u: can't pop an empty stack\n", line_num);
	fclose(var1.file_read);
	exit(EXIT_FAILURE);
}

/**
 * error_swap - Exits the program because the stack is too short for swap.
 * @stack: Pointer to the stack.
 * @line_num: Line number where the error occurred.
 */
void error_swap(stack_t **stack, unsigned int line_num)
{
	fprintf(stderr, "L%u: can't swap, stack too short\n", line_num);
	free_dlistint(*stack);
	fclose(var1.file_read);
	exit(EXIT_FAILURE);
}
