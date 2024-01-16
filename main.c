#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <errno.h>
#include "monty.h"

/**
* main - main function
* @argc: argument count
* @argv: arguments
* Return: dest.
*/
int main(int argc, char *argv[])
{
	char *filename;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		return (EXIT_FAILURE);
	}
	filename = argv[1];
	if (access(filename, F_OK) == -1)
	{
		fprintf(stderr, "Error: Can't open file %s\n", filename);
		return (EXIT_FAILURE);
	}
	if (access(filename, R_OK) == -1)
	{
		fprintf(stderr, "Error: Can't open file %s\n", filename);
		return (EXIT_FAILURE);
	}
	if (monty_process_file(filename) == -1)
	{
		return (EXIT_FAILURE);
	}

	return (0);
}
