#include "monty.h"

/**
 * psh - pushes value onto stack or queue
 * @stack: pointer to the stack
 * @line_num: line number
 */
void psh(stack_t **stack, unsigned int line_num)
{
	char *value = NULL;

	value = strtok(NULL, " ");
	if (value && isi(value))
	{
		v.val_read = atoi(value);
		if (!strcmp(v.type, "queue"))
		{
			if (!pq(stack, v.val_read))
				em(stack, line_num);
		}
		else
		{
			if (!ps(stack, v.val_read))
				em(stack, line_num);
		}
	}
	else
		epsh(stack, line_num);
}

/**
 * pl - prints stack
 * @stack: pointer to stack
 * @line_num: line number
 */
void pl(stack_t **stack, unsigned int line_num)
{
	stack_t *node = *stack;
	(void)line_num;

	while (node)
	{
		printf("%d\n", node->n);
		node = node->next;
	}
}

/**
 * pi - prints int at top of stack
 * @stack: pointer to stack
 * @line_num: line number
 */
void pi(stack_t **stack, unsigned int line_num)
{
	if (!(*stack))
		epi(stack, line_num);
	printf("%d\n", (*stack)->n);
}

/**
 * pop - pops element from stack
 * @stack: pointer to stack
 * @line_num: line number
 */
void pop(stack_t **stack, unsigned int line_num)
{
	stack_t *tmp = *stack;

	if (!(*stack))
		epop(stack, line_num);
	if (!(*stack)->next)
	{
		free(*stack);
		*stack = NULL;
		return;
	}
	*stack = (*stack)->next;
	(*stack)->prev = NULL;
	free(tmp);
}

/**
 * sw - swaps top two elements
 * @stack: pointer to stack
 * @line_num: line number
 */
void sw(stack_t **stack, unsigned int line_num)
{
	int tmp;

	if (!((*stack) && (*stack)->next))
		esw(stack, line_num);
	tmp = (*stack)->n;
	(*stack)->n = (*stack)->next->n;
	(*stack)->next->n = tmp;
}
