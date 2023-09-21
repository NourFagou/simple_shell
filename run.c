#include "shell.h"
/**
 * my_exit - Exiting the program
 * @argument: it's an array of arguments
 * Return: doesn't return nothing
 **/
void my_exit(char **argument)
{
	int my_stat = 0, ar;

	if (argument[1] != NULL)
	{
		my_stat = my_atoi(argument[1]);
	}
	for (ar = 0; argument[ar] != NULL; ar++)
	{
		free(argument[ar]);
	}
	free(argument);
	exit(my_stat);
}
