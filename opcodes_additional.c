#include "monty.h"

/**
 * pint - prints the value at the top of the stack
 * @stack: double pointer to the beginning of the stack
 * @line_number: line number from the file
 */
void pint(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL)
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*stack)->n);
}

/**
 * pop - removes the top element of the stack
 * @stack: double pointer to the beginning of the stack
 * @line_number: line number from the file
 */
void pop(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp;

	if (*stack == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
		exit(EXIT_FAILURE);
	}
	tmp = *stack;
	*stack = (*stack)->next;
	free(tmp);
}

/**
 * swap - swaps the top two elements of the stack
 * @stack: double pointer to the beginning of the stack
 * @line_number: line number from the file
 */
void swap(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	tmp = (*stack)->next;
	(*stack)->prev = tmp;
	(*stack)->next = tmp->next;
	tmp->prev = NULL;
	tmp->next = *stack;
	*stack = tmp;
}

/**
 * add - adds the top two elements of the stack
 * @stack: double pointer to the beginning of the stack
 * @line_number: line number from the file
 */
void add(stack_t **stack, unsigned int line_number)
{
	int sum;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	sum = (*stack)->n + (*stack)->next->n;
	pop(stack, line_number);
	(*stack)->n = sum;
}

/**
 * nop - does nothing
 * @stack: double pointer to the beginning of the stack
 * @line_number: line number from the file
 */
void nop(stack_t **stack, unsigned int line_number)
{
	(void)stack;
	(void)line_number;
}
