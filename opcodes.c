#include "monty.h"

/**
 * push - pushes an element to the stack.
 * @stack: double pointer to the beginning of the stack.
 * @line_number: line number from the file.
 * @n: number to push.
 *
 * Return: void
 */
void push(stack_t **stack, unsigned int line_number, const char *n)
{
	stack_t *new_node;
	int num = atoi(n);

	if (n == NULL || num == 0)
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
	new_node->n = num;
	new_node->prev = NULL;
	new_node->next = *stack;
	if (*stack != NULL)
		(*stack)->prev = new_node;
	*stack = new_node;
}

/**
 * pall - prints all the values on the stack, starting from the top.
 * @stack: double pointer to the beginning of the stack.
 * @line_number: line number from the file.
 *
 * Return: void
 */
void pall(stack_t **stack, unsigned int line_number)
{
	stack_t *current = *stack;

	(void)line_number;

	while (current)
	{
		printf("%d\n", current->n);
		current = current->next;
	}
}
