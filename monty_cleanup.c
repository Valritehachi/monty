#include <stdio.h>
#include "monty.h"

/**
* monty_cleanup - main function
* Return: 0.
*/

void monty_cleanup(void)
{
	monty_free_stack();
	monty_close_file();
}
