#include "monty.h"

/**
 * main - Entry point
 * @argc: Argument count
 * @argv: Argument vector
 * Return: EXIT_SUCCESS or EXIT_FAILURE
 */
int main(int argc, char *argv[])
{
	FILE *file;
	char *line = NULL;
	size_t len = 0;
	unsigned int line_number = 0;
	stack_t *stack = NULL;
	char *opcode, *arg;
	void (*func)(stack_t **, unsigned int, const char *);

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		return (EXIT_FAILURE);
	}

	file = fopen(argv[1], "r");
	if (!file)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		return (EXIT_FAILURE);
	}

	while (getline(&line, &len, file) != -1)
	{
		line_number++;
		opcode = strtok(line, "\n\t\r ");
		if (opcode && opcode[0] != '#')
		{
			arg = strtok(NULL, "\n\t\r ");
			func = get_func(opcode);
			if (!func)
			{
				fprintf(stderr, "L%d: unknown instruction %s\n", line_number, opcode);
				free(line);
				fclose(file);
				free_stack(stack);
				return (EXIT_FAILURE);
			}
			func(&stack, line_number, arg);
		}
	}
	free(line);
	fclose(file);
	free_stack(stack);
	return (EXIT_SUCCESS);
}
