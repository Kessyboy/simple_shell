#include "shell.h"

/**
 * _strdup - duplicates a str in the heap memory.
 * @s: Type char pointer str
 * Return: duplicated str
 */

char *_strdup(const char *s)
{
	char *fresh;
	size_t count;

	count = _strlen(s);
	fresh = malloc(sizeof(char) * (count + 1));
	if (fresh == NULL)
		return (NULL);
	_memcpy(fresh, s, count + 1);
	return (fresh);
}

/**
 * _strlen - Returns the lenght of a string.
 * @s: Type char pointer
 * Return: Always 0.
 */
int _strlen(const char *s)
{
	int count;

	for (count = 0; s[count] != 0; count++)
	{
	}
	return (count);
}

/**
 * cmp_chars - compare chars of strings
 * @str: input string.
 * @delim: delimiter.
 *
 * Return: 1 if are equals, 0 if not.
 */
int cmp_chars(char str[], const char *delim)
{
	unsigned int counter, index, deter;

	for (counter = 0, deter = 0; str[counter]; counter++)
	{
		for (index = 0; delim[index]; index++)
		{
			if (str[counter] == delim[index])
			{
				deter++;
				break;
			}
		}
	}
	if (counter == deter)
		return (1);
	return (0);
}

/**
 * _strtok - splits a string by some delimiter.
 * @str: input string.
 * @delim: delimiter.
 *
 * Return: string splited.
 */
char *_strtok(char str[], const char *delim)
{
	static char *splitted, *str_end;
	char *str_start;
	unsigned int counter, bool;

	if (str != NULL)
	{
		if (cmp_chars(str, delim))
			return (NULL);
		splitted = str; /*Store first address*/
		counter = _strlen(str);
		str_end = &str[counter]; /*Store last address*/
	}
	str_start = splitted;
	if (str_start == str_end) /*Reaching the end*/
		return (NULL);

	for (bool = 0; *splitted; splitted++)
	{
		/*Breaking loop finding the next token*/
		if (splitted != str_start)
			if (*splitted && *(splitted - 1) == '\0')
				break;
		/*Replacing delimiter for null char*/
		for (counter = 0; delim[counter]; counter++)
		{
			if (*splitted == delim[counter])
			{
				*splitted = '\0';
				if (splitted == str_start)
					str_start++;
				break;
			}
		}
		if (bool == 0 && *splitted) /*Str != Delim*/
			bool = 1;
	}
	if (bool == 0) /*Str == Delim*/
		return (NULL);
	return (str_start);
}

/**
 * _isdigit - defines if string passed is a number
 *
 * @s: input string
 * Return: 1 if string is a number. 0 in other case.
 */
int _isdigit(const char *s)
{
	unsigned int counter;

	for (counter = 0; s[counter]; counter++)
	{
		if (s[counter] < 48 || s[counter] > 57)
			return (0);
	}
	return (1);
}
