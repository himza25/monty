#include "monty.h"

/**
 * stack_push - Pushes a new element onto the stack.
 * @stack: Double pointer to the head of the stack.
 * @line_number: Line number of the opcode in the bytecode file.
 */
void stack_push(stack_t **stack, unsigned int line_number, int value)
{
	stack_t *new_node;

	/* Allocate memory for the new node */
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		printf("L%d: Error: malloc failed\n", line_number);
		exit(EXIT_FAILURE);
	}

	/* Initialize the new node */
	new_node->n = value;
	new_node->prev = NULL;
	new_node->next = *stack;

	/* Make the new node the head of the stack */
	if (*stack != NULL)
	{
		(*stack)->prev = new_node;
	}
	*stack = new_node;
}

