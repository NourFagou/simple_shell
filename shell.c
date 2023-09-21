#include "shell.h"
/**
 * main - Entry point to the program.
 * @argsn: The number of arguments.
 * @argsa: Array of arguments.
 * @envi: Array of environmental variables.
 * Return: Exit SUCCESS.
 **/
int main(int argsn, char *argsa[], char *envi[])
{
	(void)argsn;
	(void)argsa;

	if (isatty(STDIN_FILENO))
	{
		char *u_input_line;
		size_t input_size_line = 0;
		ssize_t char_read;

		while (1)
		{
			printf("$ ");
			u_input_line = NULL;
			char_read = read_input(&u_input_line, &input_size_line);

			if (char_read < 0)
			{
				perror("read)input");
				free(u_input_line);
				continue;
			}
			if (*u_input_line != '\n')
			{
				handle_input(u_input_line, envi);
			}
			free(u_input_line);
		}
	}
	else
	{
		handle_non_terminal_input();
	}

	exit(EXIT_SUCCESS);
}
