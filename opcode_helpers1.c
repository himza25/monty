#include "monty.h"

/**
 * is_valid_integer - Check if global_variable is a valid integer.
 * 
 * Return: 1 if valid, 0 otherwise.
 */
int is_valid_integer(void)
{
	return 1;
}

/**
 * op_push - Pushes an element to the stack.
 * @stack: The stack.
 * @line_number: The current line number.
 */
void op_push(stack_t **stack, unsigned int line_number)
{
	stack_t *new_node;

	if (stack == NULL)
	{
		fprintf(stderr, "L%d: stack not initialized\n", line_number);
		exit(EXIT_FAILURE);
	}

	if (!is_valid_integer())
	{
		fprintf(stderr, "L%d: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}

	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}

	new_node->n = global_variable;
	new_node->next = *stack;
	new_node->prev = NULL;

	if (*stack != NULL)
		(*stack)->prev = new_node;

	*stack = new_node;
}

/**
 * op_pall - Prints all the elements of the stack.
 * @stack: The stack.
 * @line_number: The current line number.
 */
void op_pall(stack_t **stack, unsigned int line_number)
{
	stack_t *current = *stack;

	(void) line_number;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
	}
}

