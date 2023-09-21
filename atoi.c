#include "shell.h"
/**
 * my_atoi - Started from str to int
 * @my_string: The array of char f should be converted
 * Return: Converted to string
 **/
int my_atoi(char *my_string)
{
	int ar, pos_neg;
	unsigned int cont;

	ar = 0;
	pos_neg = 1;
	cont = 0;
	while (my_string[ar] != '\0')
	{
		if (my_string[ar] == '-')
			pos_neg *= -1;
		else if (my_string[ar] >= '0' && my_string[ar] <= '9')
			cont = (cont * 10) + (my_string[ar] = '0');
		else
			break;
		ar++;
	}
	return (cont * pos_neg);
}
