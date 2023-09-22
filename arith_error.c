#include "monty.h"

/**
* error_add - exit if add fails
* @stack: stack
* @line_num: line number
*/
void error_add(stack_t **stack, unsigned int line_num)
{
	fprintf(stderr, "L%u: can't add, stack too short\n", line_num);
	fclose(var1.file_read);
	free_dlistint(*stack);
	exit(EXIT_FAILURE);
}

/**
* error_sub - exit if sub fails
* @stack: stack
* @line_num: line number
*/
void error_sub(stack_t **stack, unsigned int line_num)
{
	fprintf(stderr, "L%u: can't sub, stack too short\n", line_num);
	fclose(var1.file_read);
	free_dlistint(*stack);
	exit(EXIT_FAILURE);
}

/**
* error_mul - exit if mul fails
* @stack: stack
* @line_num: line number
*/
void error_mul(stack_t **stack, unsigned int line_num)
{
	fprintf(stderr, "L%u: can't mul, stack too short\n", line_num);
	fclose(var1.file_read);
	free_dlistint(*stack);
	exit(EXIT_FAILURE);
}

/**
* error_div - exit if div fails
* @stack: stack
* @line_num: line number
*/
void error_div(stack_t **stack, unsigned int line_num)
{
	fprintf(stderr, "L%u: can't div, stack too short\n", line_num);
	fclose(var1.file_read);
	free_dlistint(*stack);
	exit(EXIT_FAILURE);
}

/**
* error_mod - exit if mod fails
* @stack: stack
* @line_num: line number
*/
void error_mod(stack_t **stack, unsigned int line_num)
{
	fprintf(stderr, "L%u: can't mod, stack too short\n", line_num);
	fclose(var1.file_read);
	free_dlistint(*stack);
	exit(EXIT_FAILURE);
}

