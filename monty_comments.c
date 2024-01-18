#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "monty.h"

ssize_t getline(char **lineptr, size_t *n, FILE *stream);
/**
* handle_comments - main function
* @input_file_path: argument count
* @output_file_path: arguments
* Return: dest.
*/
int handle_comments(const char *input_file_path, const char *output_file_path)
{
	char *line = NULL;
	size_t len = 0;
	ssize_t read;

	FILE *input_file = fopen(input_file_path, "r");
	FILE *output_file = fopen(output_file_path, "w");

	if (input_file == NULL || output_file == NULL)
	{
		perror("Error opening files");
		return (-1);
	}

	while ((read = getline(&line, &len, input_file)) != -1)
	{
		if (line[0] == '#')
		{
			continue;
		}

		fprintf(output_file, "%s", line);
	}

	free(line);
	fclose(input_file);
	fclose(output_file);

	return (0);
}

