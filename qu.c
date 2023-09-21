#include "monty.h"

/**
 * qu - change the type of storing to queue.
 * @s: pointer to stack
 * @l: given number of line
 */
void qu(stack_t **s, unsigned int l)
{
	(void)s;
	(void)l;

	v.t = "queue";
}

/**
 * st - change the type of storing to stack.
 * @s: pointer to stack
 * @l: given number of line
 */
void st(stack_t **s, unsigned int l)
{
	(void)s;
	(void)l;

	v.t = "stack";
}
