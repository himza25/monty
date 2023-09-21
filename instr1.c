#include "monty.h"

/**
* add - add two top elements of the stack
* @stack: pointer to stack
* @ln: line number
*/
void add(stack_t **stack, unsigned int ln)
{
	if (!((*stack) && (*stack)->next))
		ead(stack, ln);
	(*stack)->next->n += (*stack)->n;
	pop(stack, ln);
}

/**
* np - does nothing
* @stack: pointer to stack
* @ln: line number
*/
void np(stack_t **stack, unsigned int ln)
{
	(void)stack;
	(void)ln;
}

/**
* sb - subtract two top elements of the stack
* @stack: pointer to stack
* @ln: line number
*/
void sb(stack_t **stack, unsigned int ln)
{
	if (!((*stack) && (*stack)->next))
		esb(stack, ln);
	(*stack)->next->n -= (*stack)->n;
	pop(stack, ln);
}

/**
* ml - multiply two top elements of the stack
* @stack: pointer to stack
* @ln: line number
*/
void ml(stack_t **stack, unsigned int ln)
{
	if (!((*stack) && (*stack)->next))
		eml(stack, ln);
	(*stack)->next->n *= (*stack)->n;
	pop(stack, ln);
}

/**
* dv - divide two top elements of the stack
* @stack: pointer to stack
* @ln: line number
*/
void dv(stack_t **stack, unsigned int ln)
{
	if (!((*stack) && (*stack)->next))
		edv(stack, ln);
	if ((*stack)->n == 0)
		emth(stack, ln);
	(*stack)->next->n /= (*stack)->n;
	pop(stack, ln);
}
