#ifndef MONTY_H
#define MONTY_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

/* Global Variable */
extern int global_variable;

/* General Error Handling Functions */
void error_malloc(unsigned int line_number);
void error_unknown_instruction(unsigned int line_number, char *opcode);
void error_file_open(void);

/* Specific Error Handling Functions */
void error_pop_on_empty(unsigned int line_number);
void error_invalid_push_arg(unsigned int line_number);

/* File Operations */
void file_open(const char *filename);
void file_read(FILE *fp, char **line, size_t *len, unsigned int *line_number, stack_t **stack);

/* Opcode Execution */
void opcode_exec(char *opcode, stack_t **stack, unsigned int line_number);

/* Opcode Helpers */
void opcode_helpers1(stack_t **stack, unsigned int line_number);
void opcode_helpers2(stack_t **stack, unsigned int line_number);

/* Stack Operations */
void stack_push(stack_t **stack, unsigned int line_number, int value);
void stack_pop(stack_t **stack, unsigned int line_number);
void free_stack(stack_t **stack);

/* Check if global_variable contains a valid integer */
int is_valid_integer(void);

#endif /* MONTY_H */
