#include <stdio.h>
#include "monty.h"



stack_t *g_stack = NULL;
/**
* monty_get_stack - main function
* Return: 0.
*/
stack_t *monty_get_stack(void)
{
	return (g_stack);
}
/**
* monty_set_stack - main function
* @stack: arguments
* Return: 0.
*/
void monty_set_stack(stack_t *stack)
{
	g_stack = stack;
}
/**
* monty_free_stack - main function
* Return: 0.
*/
void monty_free_stack(void)
{
	if (g_stack != NULL)
	{
		monty_stack_free(g_stack);
		g_stack = NULL;
	}
}

