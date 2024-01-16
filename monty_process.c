#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "monty.h"


int is_space(char c)
{
	return (c <= 32 ? 0 : -1);
}

int  monty_read_command(char *line, char *op, char *param)
{
	char *s, *d;
	
	s =  line;
	op[0]  	= 0;
	param[0] = 0;

	if (*s != 0) 
	{
		while(*s != 0 && is_space(*s) == 0)
		{
			s++;
		}
		if (*s == 0)
		{
			return (0);	
		}
		d = op;
		while(*s != 0 && is_space(*s) == -1)
		{
			*d++ = *s++;
		}
		*d = 0;
		while(*s != 0 && is_space(*s) == 0)
                {
                        s++;
                }
		if(*s == 0)
		{
			return (0);;
		}
		d = param;
		while(*s != 0 && is_space(*s) == -1)
                {
                        *d++ = *s++;
                }
                *d = 0;
	}
	return (0);
}

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
	while (fgets(line, 512, file) != NULL)
	{
		printf("read line: [%s]",line);
		if (monty_read_command(line, op, param) == 0)
		{
			printf("op: %s params: %s\n", op, param);
		}
	}
	return (0);
}

/**
* monty_process_file - main function
* @filename: arguments
* Return: 0.
*/
int monty_process_file(char *filename)
{
	FILE *file;
	char opcode[256];
	char param[256];
	int rc;

	file = fopen(filename, "r");
	if (file == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", filename);
		return (EXIT_FAILURE);
	}

	rc = monty_process_line(file, opcode, param);
	while (rc != -1)
	{
		if (opcode[0] == 0)
		{
			break;
		}

		rc = monty_process_line(file, opcode, param);
	}

	fclose(file);

	return (rc);
}
