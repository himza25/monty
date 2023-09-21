#include "monty.h"

/**
 * op_add - Adds the top two elements of the stack.
 * @stack: Double pointer to the head of the stack.
 * @line_number: Line number of the opcode in the bytecode file.
 */
void op_add(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;
	int result;

	/* Ensure there are at least two elements in stack */
	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", line_number);
		free_stack(stack);
		exit(EXIT_FAILURE);
	}

	temp = *stack;
	result = temp->n + temp->next->n;

	/* Pop the top element and replace the next top's value with result */
	*stack = temp->next;
	(*stack)->n = result;
	free(temp);
}

/**
 * op_sub - Subtracts the top two elements of the stack.
 * @stack: Double pointer to the head of the stack.
 * @line_number: Line number of the opcode in the bytecode file.
 */
void op_sub(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;
	int result;

	/* Ensure there are at least two elements in stack */
	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", line_number);
		free_stack(stack);
		exit(EXIT_FAILURE);
	}

	temp = *stack;
	result = temp->next->n - temp->n;

	/* Pop the top element and replace the next top's value with result */
	*stack = temp->next;
	(*stack)->n = result;
	free(temp);
}

