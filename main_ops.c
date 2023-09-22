#include "monty.h"

glob var1;

/**
 * main - main func
 * @argc: arg count
 * @argv: args
 * Return: 0 or -1
*/
int main(int argc, char *argv[])
{
	instruction_t instructions[] = {
		{"push", push},
		{"pall", pall},
		{"pint", pint},
		{"pop", pop},
		{"swap", swap},
		{"add", add},
		{"nop", nop},
		{"sub", sub},
		{"div", _div},
		{"mul", mul},
		{"mod", mod},
		{"pchar", pchar},
		{"pstr", pstr},
		{"rotl", rotl},
		{"rotr", rotr},
		{"queue", queue},
		{"stack", stack},
		{NULL, NULL}
	};

	if (argc != 2)
	{
		write(STDERR_FILENO, "USAGE: monty file\n", 18);
		return (EXIT_FAILURE);
	}
	var1.file_read = fopen(argv[1], "r");
	if (!var1.file_read)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		return (EXIT_FAILURE);
	}
	var1.type = "stack";
	getinstruction(instructions);
	return (EXIT_SUCCESS);
}

/**
 * getinstruction - gets instructions
 * @instructions: instructions data
*/
void getinstruction(instruction_t *instructions)
{
	unsigned int nline = 1, i;
	char *inst = NULL, line[MAX_LENGTH];
	stack_t *stack = NULL;

	while (fgets(line, MAX_LENGTH, var1.file_read))
	{
		line[strcspn(line, "\n")] = '\0';
		var1.line_read = ignore_spaces(line);
		if (*var1.line_read != '\0' && *var1.line_read != '#')
		{
			inst = strtok(var1.line_read, " ");
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
				error_unknown(&stack, nline);
		}
		nline++;
	}
	fclose(var1.file_read);
	free_dlistint(stack);
}

/**
 * ignore_spaces - removes spaces
 * @old_line: old line
 * Return: new line
*/
char *ignore_spaces(char *old_line)
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

