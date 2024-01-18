#include <stdio.h>
#include "monty.h"

FILE *g_file = NULL;
/**
* monty_get_file - main function
* Return: 0.
*/
FILE *monty_get_file(void)
{
	return (g_file);
}
/**
* monty_set_file - main function
* @file: arguments
* Return: 0.
*/
void monty_set_file(FILE *file)
{
	g_file = file;
}
/**
* monty_close_file - main function
* Return: 0.
*/
void monty_close_file(void)
{
	if (g_file != NULL)
	{
		fclose(g_file);
		g_file = NULL;
	}
}
