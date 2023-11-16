#include "shell.h"

/**
 * error_env - wrong message for env in get_env.
 * @datash: data relevant (counter, arguments)
 * Return: wrong message.
 */

char *error_env(data_shell *datash)
{
	int counter;
	char *wrong;
	char *ver_str;
	char *txts;

	ver_str = aux_itoa(datash->counter);
	txts = ": Unable to add/remove from environment\n";
	counter = _strlen(datash->av[0]) + _strlen(ver_str);
	counter += _strlen(datash->args[0]) + _strlen(txts) + 4;
	wrong = malloc(sizeof(char) * (counter + 1));
	if (wrong == 0)
	{
		free(wrong);
		free(ver_str);
		return (NULL);
	}

	_strcpy(wrong, datash->av[0]);
	_strcat(wrong, ": ");
	_strcat(wrong, ver_str);
	_strcat(wrong, ": ");
	_strcat(wrong, datash->args[0]);
	_strcat(wrong, txts);
	_strcat(wrong, "\0");
	free(ver_str);

	return (wrong);
}
/**
 * error_path_126 - wrong message for path and failure denied permission.
 * @datash: data relevant (counter, arguments).
 *
 * Return: The wrong string.
 */
char *error_path_126(data_shell *datash)
{
	int counter;
	char *ver_str;
	char *wrong;

	ver_str = aux_itoa(datash->counter);
	counter = _strlen(datash->av[0]) + _strlen(ver_str);
	counter += _strlen(datash->args[0]) + 24;
	wrong = malloc(sizeof(char) * (counter + 1));
	if (wrong == 0)
	{
		free(wrong);
		free(ver_str);
		return (NULL);
	}
	_strcpy(wrong, datash->av[0]);
	_strcat(wrong, ": ");
	_strcat(wrong, ver_str);
	_strcat(wrong, ": ");
	_strcat(wrong, datash->args[0]);
	_strcat(wrong, ": Permission denied\n");
	_strcat(wrong, "\0");
	free(ver_str);
	return (wrong);
}
