#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "monty.h"

/**
* monty_process_line - main function
* @op: arguments
* @param: arguments
* @file: arguments
* Return: 0.
*/
int monty_process_line(FILE *file, char *op, char *param)
{
	char line[512];

	op[0] = 0;
	param[0] = 0;
	if (fgets(line, 512, file) != NULL)
	{
		if (monty_read_command(line, op, param) != 0)
		{
			return (EXIT_FAILURE);
		}
	}
	return (0);
}
/**
* monty_process_lines - main function
* @file: arguments
* @stack: arguments
* Return: 0.
*/

int monty_process_lines(stack_t **stack, FILE *file)
{
	char opcode[256];
	char param[256];
	int rc;
	MontyFunction func;
	int line_number = 1;

	rc = monty_process_line(file, opcode, param);
	while (rc != -1)
	{
		if (opcode[0] == 0)
		{
			break;
		}

		func = monty_get_function(opcode);
		if (func == NULL)
		{
			fprintf(stderr, "L%d: unknown instruction <%s>\n", line_number, opcode);
			rc = EXIT_FAILURE;
			break;
		}

		func(stack, param, line_number);

		rc = monty_process_line(file, opcode, param);
		line_number++;
	}
	return (rc);
}

/**
* monty_process_file - main function
* @filename: arguments
* Return: 0.
*/
int monty_process_file(char *filename)
{
	FILE *file;
	int rc;
	stack_t *stack;

	file = fopen(filename, "r");
	if (file == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", filename);
		return (EXIT_FAILURE);
	}

	stack = NULL;
	rc = monty_process_lines(&stack, file);

	if (stack != NULL)
	{
		monty_stack_free(stack);
	}

	fclose(file);

	return (rc);
}
