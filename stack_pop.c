#include "monty.h"

/**
 * stack_pop - Pops the top element from the stack.
 * @stack: Double pointer to the head of the stack.
 * @line_number: Line number of the opcode in the bytecode file.
 */
void stack_pop(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;

	if (*stack == NULL)
	{
		printf("L%d: can't pop an empty stack\n", line_number);
		exit(EXIT_FAILURE);
	}

	/* Store the head of the stack and make the next node the new head */
	temp = *stack;
	*stack = (*stack)->next;
	if (*stack != NULL)
	{
		(*stack)->prev = NULL;
	}

	/* Free the original head */
	free(temp);
}

/**
 * free_stack - Frees a stack.
 * @stack: Double pointer to the stack to be freed.
 */
void free_stack(stack_t **stack)
{
	stack_t *current = *stack;
	stack_t *next_node = NULL;

	while (current != NULL)
	{
		next_node = current->next;
		free(current);
		current = next_node;
	}
	*stack = NULL;
}

