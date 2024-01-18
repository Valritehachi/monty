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
