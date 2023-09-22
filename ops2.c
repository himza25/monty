#include "monty.h"

/**
* mod - Modulo operation
* @stack: stack
* @line_number: line number
*/
void mod(stack_t **stack, unsigned int line_number)
{
	if (!((*stack) && (*stack)->next))
		error_mod(stack, line_number);
	if ((*stack)->n == 0)
		error_math(stack, line_number);
	(*stack)->next->n %= (*stack)->n;
	pop(stack, line_number);
}

/**
* pchar - Print char
* @stack: stack
* @line_number: line number
*/
void pchar(stack_t **stack, unsigned int line_number)
{
	if (!(*stack))
		error_pchar_empty(stack, line_number);
	if ((*stack)->n > 127 || (*stack)->n < 0)
		error_not_char(stack, line_number);
	printf("%c\n", (*stack)->n);
}

/**
* pstr - Print string
* @stack: stack
* @line_number: line number
*/
void pstr(stack_t **stack, unsigned int line_number)
{
	stack_t *node = *stack;
	(void)line_number;

	while (node)
	{
		if (node->n > 127 || node->n <= 0)
			break;
		printf("%c", node->n);
		node = node->next;
	}
	printf("\n");
}

/**
* rotl - Rotate left
* @stack: stack
* @line_number: line number
*/
void rotl(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp = *stack;
	int top;
	(void)line_number;

	while (tmp)
	{
		if (!tmp->prev)
			top = tmp->n;
		else if (!tmp->next)
		{
			tmp->prev->n = tmp->n;
			tmp->n = top;
		}
		else
			tmp->prev->n = tmp->n;
		tmp = tmp->next;
	}
}

/**
* rotr - Rotate right
* @stack: stack
* @line_number: line number
*/
void rotr(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp = *stack;
	int top;
	(void)line_number;

	while (tmp && tmp->next)
		tmp = tmp->next;
	while (tmp)
	{
		if (!tmp->next)
			top = tmp->n;
		else if (!tmp->prev)
		{
			tmp->next->n = tmp->n;
			tmp->n = top;
		}
		else
			tmp->next->n = tmp->n;
		tmp = tmp->prev;
	}
}

