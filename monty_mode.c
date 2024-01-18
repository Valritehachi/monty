#include <stdio.h>
#include "monty.h"

int g_mode = 0;
/**
* monty_get_mode - main function
* Return: 0.
*/
int monty_get_mode(void)
{
	return (g_mode);
}
/**
* monty_set_mode - main function
* @mode: arguments
* Return: 0.
*/
void monty_set_mode(int mode)
{
	g_mode = mode;
}

/**
* monty_mode_stack - main function
* @stack: arguments
* @arg: arguments
* @line_number: arguments
* Return: 0.
*/
void monty_mode_stack(stack_t **stack, char *arg, unsigned int line_number)
{
	stack = stack;
	arg = arg;
	line_number = line_number;

	monty_set_mode(0);
}

/**
* monty_mode_queue - main function
* @stack: arguments
* @arg: arguments
* @line_number: arguments
* Return: 0.
*/
void monty_mode_queue(stack_t **stack, char *arg, unsigned int line_number)
{
	stack = stack;
	arg = arg;
	line_number = line_number;

	monty_set_mode(1);
}
