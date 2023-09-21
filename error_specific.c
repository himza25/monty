#include "monty.h"

/**
 * error_pop_on_empty - Handles pop on empty stack.
 * @line_number: The line number where the error occurred.
 */
void error_pop_on_empty(unsigned int line_number)
{
	printf("L%d: can't pop an empty stack\n", line_number);
	exit(EXIT_FAILURE);
}

/**
 * error_invalid_push_arg - Handles invalid argument for push.
 * @line_number: The line number where the error occurred.
 */
void error_invalid_push_arg(unsigned int line_number)
{
	printf("L%d: usage: push integer\n", line_number);
	exit(EXIT_FAILURE);
}

