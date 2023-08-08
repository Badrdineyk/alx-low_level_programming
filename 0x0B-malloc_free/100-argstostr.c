#include <stdlib.h>
#include "main.h"

/**
 * argstostr - Concatenates all the arguments of the program.
 * @ac: The number of arguments.
 * @av: An array of arguments.
 *
 * Return: On success: A pointer to a new string,
 * or Null if it fails.
 * If @ac == 0 or @av == NULL return NULL.
 */
char *argstostr(int ac, char **av)
{
	int total_len = 0;
	int lengths_args[ac];
	int i, j;
	int curr_index = 0;
	char *conc_args;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		int arg_len = 0;

		while (av[i][arg_len] != '\0')
			arg_len++;

		lengths_args[i] = arg_len;
		total_len += arg_len + 1;
	}

	conc_args = (char *)malloc((total_len + 1) * sizeof(char));

	if (conc_args == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; j < lengths_args[i]; j++)
		{
			conc_args[curr_index] = av[i][j];
			curr_index++;
		}

		conc_args[curr_index] = '\n';
		curr_index++;
	}

	conc_args[total_len] = '\0';

	return (conc_args);
}
