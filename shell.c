#include "shell.h"

/**
 * main - Entry point
 * @ac: arguments count
 * @argv: arguments vector
 *
 * Return: Always 0 (Success)
 */
int main(int ac, char **argv)
{
	char *prompt = "($) ";
	char *line = NULL;
	size_t n = 0;

	(void)ac, (void)*argv;

	while (1)
	{
		printf("%s", prompt);
		getline(&line, &n, stdin);
		printf("%s", line);
		free(line);
	}

	free(line);

	return (EXIT_SUCCESS);
}
