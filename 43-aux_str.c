#include "shell.h"

/**
 * rev_string - reverses a string.
 * @s: input string.
 * Return: no return.
 */

void rev_string(char *s)
{
	int count = 0, counter, index;
	char *txts, stored;

	while (count >= 0)
	{
		if (s[count] == '\0')
			break;
		count++;
	}
	txts = s;

	for (counter = 0; counter < (count - 1); counter++)
	{
		for (index = counter + 1; index > 0; index--)
		{
			stored = *(txts + index);
			*(txts + index) = *(txts + (index - 1));
			*(txts + (index - 1)) = stored;
		}
	}
}
