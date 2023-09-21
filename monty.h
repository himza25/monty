#ifndef MONTY_H
#define MONTY_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
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
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

/**
 * struct gbl - global variable for file and line reading
 * @file_read: file being read
 * @line_read: line being read
 * @type: type of operation
 *
 * Description: contains variables for file and line reading
 */
typedef struct gbl
{
	FILE *file_read;
	char *line_read;
	char *type;
} gbl;

extern gbl v;

/* Function Prototypes */
void gi(instruction_t *instructions);
void ps(stack_t **stack, int n);
void pl(stack_t **stack, unsigned int line_number);
void pi(stack_t **stack, unsigned int line_number);
void psh(stack_t **stack, unsigned int line_number);
void pop(stack_t **stack, unsigned int line_number);
void sw(stack_t **stack, unsigned int line_number);
void add(stack_t **stack, unsigned int line_number);
void np(stack_t **stack, unsigned int line_number);
void sb(stack_t **stack, unsigned int line_number);
void dv(stack_t **stack, unsigned int line_number);
void ml(stack_t **stack, unsigned int line_number);
void md(stack_t **stack, unsigned int line_number);
void pc(stack_t **stack, unsigned int line_number);
void psr(stack_t **stack, unsigned int line_number);
void rl(stack_t **stack, unsigned int line_number);
void rr(stack_t **stack, unsigned int line_number);
void qu(stack_t **stack, unsigned int line_number);
void st(stack_t **stack, unsigned int line_number);
char *is(char *old_line);
void fd(stack_t *stack);
int di(int c);
int isi(char *s);

#endif /* MONTY_H */
