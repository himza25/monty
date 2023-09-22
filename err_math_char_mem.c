#include "monty.h"

/**
* error_math - exit on div by 0
* @stack: stack
* @line_num: line number
*/
void error_math(stack_t **stack, unsigned int line_num)
{
	fprintf(stderr, "L%u: division by zero\n", line_num);
	fclose(var1.file_read);
	free_dlistint(*stack);
	exit(EXIT_FAILURE);
}

/**
* error_pchar_empty - exit on empty stack for pchar
* @stack: stack
* @line_num: line number
*/
void error_pchar_empty(stack_t **stack, unsigned int line_num)
{
	fprintf(stderr, "L%u: can't pchar, stack empty\n", line_num);
	fclose(var1.file_read);
	free_dlistint(*stack);
	exit(EXIT_FAILURE);
}

/**
* error_not_char - exit if pchar out of range
* @stack: stack
* @line_num: line number
*/
void error_not_char(stack_t **stack, unsigned int line_num)
{
	fprintf(stderr, "L%u: can't pchar, value out of range\n", line_num);
	fclose(var1.file_read);
	free_dlistint(*stack);
	exit(EXIT_FAILURE);
}

/**
* error_memory - exit on malloc fail
* @stack: stack
* @line_num: line number
*/
void error_memory(stack_t **stack, unsigned int line_num)
{
	(void)line_num;

	fprintf(stderr, "Error: malloc failed\n");
	fclose(var1.file_read);
	free_dlistint(*stack);
	exit(EXIT_FAILURE);
}

