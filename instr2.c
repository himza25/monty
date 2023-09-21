#include "monty.h"

/**
 * md - that gives modulo
 * @stack: pointer to stack
 * @ln: line number
 */
void md(stack_t **stack, unsigned int ln)
{
	if (!((*stack) && (*stack)->next))
		emd(stack, ln);
	if ((*stack)->n == 0)
		emth(stack, ln);
	(*stack)->next->n %= (*stack)->n;
	pop(stack, ln);
}

/**
 * pc - that prints a char at the top of stack
 * @stack: pointer to stack
 * @ln: line number
 */
void pc(stack_t **stack, unsigned int ln)
{
	if (!(*stack))
		epc1(stack, ln);
	if ((*stack)->n > 127 || (*stack)->n < 0)
		epc2(stack, ln);
	printf("%c\n", (*stack)->n);
}

/**
 * psr - prints a string from ASCII code
 * @stack: pointer to stack
 * @ln: line number
 */
void psr(stack_t **stack, unsigned int ln)
{
	stack_t *node = *stack;
	(void)ln;

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
 * rl - rotates the stack to the top
 * @stack: pointer to stack
 * @ln: line number
 */
void rl(stack_t **stack, unsigned int ln)
{
	stack_t *tmp = *stack;
	int top;
	(void)ln;

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
 * rr - rotates the stack to the tail
 * @stack: pointer to stack
 * @ln: line number
 */
void rr(stack_t **stack, unsigned int ln)
{
	stack_t *tmp = *stack;
	int top;
	(void)ln;

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
