#include "shell.h"

/**
 * _strcat - concatenate two strings
 * @dest: char pointer the dest of the copied str
 * @src: const char pointer the source of str
 * Return: the dest
 */

char *_strcat(char *dest, const char *src)
{
	int counter;
	int index;

	for (counter = 0; dest[counter] != '\0'; counter++)
		;

	for (index = 0; src[index] != '\0'; index++)
	{
		dest[counter] = src[index];
		counter++;
	}

	dest[counter] = '\0';
	return (dest);
}

/**
 * *_strcpy - Copies the string pointed to by src.
 * @dest: Type char pointer the dest of the copied str
 * @src: Type char pointer the source of str
 * Return: the dest.
 */

char *_strcpy(char *dest, char *src)
{

	size_t a;

	for (a = 0; src[a] != '\0'; a++)
	{
		dest[a] = src[a];
	}
	dest[a] = '\0';

	return (dest);
}

/**
 * _strcmp - Function that compares two strings.
 * @s1: type str compared
 * @s2: type str compared
 * Return: Always 0.
 */

int _strcmp(char *s1, char *s2)
{
	int counter;

	for (counter = 0; s1[counter] == s2[counter] && s1[counter]; counter++)
		;

	if (s1[counter] > s2[counter])
		return (1);
	if (s1[counter] < s2[counter])
		return (-1);
	return (0);
}

/**
 * _strchr - locates a character in a string,
 * @s: string.
 * @c: character.
 * Return: the pointer to the first occurrence of the character c.
 */

char *_strchr(char *s, char c)
{
	unsigned int counter = 0;

	for (; *(s + counter) != '\0'; counter++)
		if (*(s + counter) == c)
			return (s + counter);
	if (*(s + counter) == c)
		return (s + counter);
	return ('\0');
}

/**
 * _strspn - gets the length of a prefix substring.
 * @s: initial segment.
 * @accept: accepted bytes.
 * Return: the number of accepted bytes.
 */

int _strspn(char *s, char *accept)
{
	int counter, index, bool;

	for (counter = 0; *(s + counter) != '\0'; counter++)
	{
		bool = 1;
		for (index = 0; *(accept + index) != '\0'; index++)
		{
			if (*(s + counter) == *(accept + index))
			{
				bool = 0;
				break;
			}
		}
		if (bool == 1)
			break;
	}
	return (counter);
}
