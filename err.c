#include "monty.h"
/**
* epsh - that exit with error
* @stack: pointer to stack
* @line_num: giver number of line
*/
void epsh(stack_t **stack, unsigned int line_num)
{
	fprintf(stderr, "L%u: usage: push integer\n", line_num);
	fd(*stack);
	fclose(v.file_read);
	exit(EXIT_FAILURE);
}

/**
* euk - that exit with error
* @stack: pointer to stack
* @line_num: giver number of line
*/
void euk(stack_t **stack, unsigned int line_num)
{
	fprintf(stderr, "L%u: unknown instruction %s\n", line_num, v.line_read);
	fd(*stack);
	fclose(v.file_read);
	exit(EXIT_FAILURE);
}

/**
* epi - that exit with error
* @stack: pointer to stack
* @line_num: giver number of line
*/
void epi(stack_t **stack, unsigned int line_num)
{
	fprintf(stderr, "L%u: can't pint, stack empty\n", line_num);
	fd(*stack);
	fclose(v.file_read);
	exit(EXIT_FAILURE);
}

/**
* epop - that exit with error
* @stack: pointer to stack
* @line_num: giver number of line
*/
void epop(stack_t **stack, unsigned int line_num)
{
	(void)**stack;

	fprintf(stderr, "L%u: can't pop an empty stack\n", line_num);
	fclose(v.file_read);
	exit(EXIT_FAILURE);
}

/**
* esw - that exit with error
* @stack: pointer to stack
* @line_num: giver number of line
*/
void esw(stack_t **stack, unsigned int line_num)
{
	fprintf(stderr, "L%u: can't swap, stack too short\n", line_num);
	fd(*stack);
	fclose(v.file_read);
	exit(EXIT_FAILURE);
}
