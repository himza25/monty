#include "monty.h"

/**
* add - Adds two top elements
* @stack: stack
* @line_number: line number
*/
void add(stack_t **stack, unsigned int line_number)
{
	if (!((*stack) && (*stack)->next))
		error_add(stack, line_number);
	(*stack)->next->n += (*stack)->n;
	pop(stack, line_number);
}

/**
* nop - No operation
* @stack: stack
* @line_number: line number
*/
void nop(stack_t **stack, unsigned int line_number)
{
	(void)stack;
	(void)line_number;
}

/**
* sub - Subtracts two top elements
* @stack: stack
* @line_number: line number
*/
void sub(stack_t **stack, unsigned int line_number)
{
	if (!((*stack) && (*stack)->next))
		error_sub(stack, line_number);
	(*stack)->next->n -= (*stack)->n;
	pop(stack, line_number);
}

/**
* mul - Multiplies two top elements
* @stack: stack
* @line_number: line number
*/
void mul(stack_t **stack, unsigned int line_number)
{
	if (!((*stack) && (*stack)->next))
		error_mul(stack, line_number);
	(*stack)->next->n *= (*stack)->n;
	pop(stack, line_number);
}

/**
* _div - Divides two top elements
* @stack: stack
* @line_number: line number
*/
void _div(stack_t **stack, unsigned int line_number)
{
	if (!((*stack) && (*stack)->next))
		error_div(stack, line_number);
	if ((*stack)->n == 0)
		error_math(stack, line_number);
	(*stack)->next->n /= (*stack)->n;
	pop(stack, line_number);
}

