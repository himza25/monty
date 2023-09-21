#include "monty.h"

gbl v;

/**
 * main - main function of monty project
 * @argc: num of args
 * @argv: file path
 * Return: 0 on success, on error -1 returned
 */
int main(int argc, char *argv[])
{
	instruction_t instructions[] = {
		{"push", psh},
		{"pall", pl},
		{"pint", pi},
		{"pop", pop},
		{"swap", sw},
		{"add", add},
		{"nop", np},
		{"sub", sb},
		{"div", dv},
		{"mul", ml},
		{"mod", md},
		{"pchar", pc},
		{"pstr", psr},
		{"rotl", rl},
		{"rotr", rr},
		{"queue", qu},
		{"stack", st},
		{NULL, NULL}
	};

	if (argc != 2)
	{
		write(STDERR_FILENO, "USAGE: monty file\n", 18);
		return (EXIT_FAILURE);
	}
	v.file_read = fopen(argv[1], "r");
	if (!v.file_read)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		return (EXIT_FAILURE);
	}
	v.type = "stack";
	gi(instructions);
	return (EXIT_SUCCESS);
}

/**
 * gi - get instructions from a file
 * @instructions: the instructions data structure
 */
void gi(instruction_t *instructions)
{
	unsigned int nline = 1, i;
	char *inst = NULL, line[MAX_LENGTH];
	stack_t *stack = NULL;

	while (fgets(line, MAX_LENGTH, v.file_read))
	{
		line[strcspn(line, "\n")] = '\0';
		v.line_read = is(line);
		if (*v.line_read != '\0' && *v.line_read != '#')
		{
			inst = strtok(v.line_read, " ");
			i = 0;
			while (instructions[i].opcode)
			{
				if (!(strcmp(inst, instructions[i].opcode)))
				{
					instructions[i].f(&stack, nline);
					break;
				}
				i++;
			}
			if (!instructions[i].opcode)
				euk(&stack, nline);
		}
		nline++;
	}
	fclose(v.file_read);
	fd(stack);
}

/**
 * is - ignore surrounded spaces in opcode
 * @old_line: opcode line
 * Return: opcode line after removing surrounded spaces
 */
char *is(char *old_line)
{
	char *end_line, *start_line = old_line;

	while (*start_line == ' ')
		start_line++;
	end_line = start_line + (strlen(start_line) - 1);
	while (end_line > start_line && *end_line == ' ')
		end_line--;
	*(end_line + 1) = '\0';
	return (start_line);
}
