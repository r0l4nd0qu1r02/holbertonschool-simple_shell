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
	ssize_t number_of_characters_read;

	(void)ac, (void)*argv;

	do {
		printf("%s", prompt);

		number_of_characters_read = getline(&line, &n, stdin);
		if (number_of_characters_read == -1) /* EOF */
			return (EXIT_FAILURE);

		printf("%s", line);
		free(line);
	} while (1);

	return (EXIT_SUCCESS);
}
