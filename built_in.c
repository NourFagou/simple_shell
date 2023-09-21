#include "shell.h"
/**
 * my_envi - It will prints the environmental value
 * Return: Return 0 success
 */
int my_envi(void);
/**
 * check_build_in - Checking the string built in function
 * @final_string: input from user
 * @envp: array for the environmental variables
 * Return: Return an integer value
 */
int check_build_in(char *final_string, char *envp[])
{
	char *array_buitin[] = {"cd", "exit", "env"};
	int num_builtins = sizeof(array_buitin) / sizeof(array_buitin[0]);
	int fa;
	(void)envp;

	for (fa = 0; fa < num_builtins; fa++)
	{
		if (my_strcmp(array_buitin[fa], final_string) == 0)
		{
			switch (fa + 1)
			{
				case 1:
				chdir(final_string);
				return (1);

			case 2:
				exit(EXIT_SUCCESS);

			case 3:
				my_envi();
				return (1);

			default:
				return (0);
			}
		}
	}

	return (0);
}
