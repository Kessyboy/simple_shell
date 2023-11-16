#include "shell.h"

/**
 * cd_shell - changes current directory
 * @datash: data relevant
 * Return: 1 on success
 */

int cd_shell(data_shell *datash)
{
	char *path_c;
	int ishome, ishome2, isddash;

	path_c = datash->args[1];

	if (path_c != NULL)
	{
		ishome = _strcmp("$HOME", path_c);
		ishome2 = _strcmp("~", path_c);
		isddash = _strcmp("--", path_c);
	}

	if (path_c == NULL || !ishome || !ishome2 || !isddash)
	{
		cd_to_home(datash);
		return (1);
	}

	if (_strcmp("-", path_c) == 0)
	{
		cd_previous(datash);
		return (1);
	}

	if (_strcmp(".", path_c) == 0 || _strcmp("..", path_c) == 0)
	{
		cd_dot(datash);
		return (1);
	}

	cd_to(datash);

	return (1);
}
