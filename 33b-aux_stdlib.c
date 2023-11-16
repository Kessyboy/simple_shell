#include "shell.h"

/**
 * get_len - Get the counter of a number.
 * @n: type int number.
 * Return: Lenght of a number.
 */
int get_len(int n)
{
	unsigned int num_1;
	int counter = 1;

	if (n < 0)
	{
		counter++;
		num_1 = n * -1;
	}
	else
	{
		num_1 = n;
	}
	while (num_1 > 9)
	{
		counter++;
		num_1 = num_1 / 10;
	}

	return (counter);
}
/**
 * aux_itoa - function converts int to string.
 * @n: type int number
 * Return: String.
 */
char *aux_itoa(int n)
{
	unsigned int num_1;
	int counter = get_len(n);
	char *buffer;

	buffer = malloc(sizeof(char) * (counter + 1));
	if (buffer == 0)
		return (NULL);

	*(buffer + counter) = '\0';

	if (n < 0)
	{
		num_1 = n * -1;
		buffer[0] = '-';
	}
	else
	{
		num_1 = n;
	}

	counter--;
	do
	{
		*(buffer + counter) = (num_1 % 10) + '0';
		num_1 = num_1 / 10;
		counter--;
	} while (num_1 > 0);
	return (buffer);
}

/**
 * _atoi - converts a string to an integer.
 * @s: input string.
 * Return: integer.
 */
int _atoi(char *s)
{
	unsigned int count = 0, size = 0, oi = 0, pn = 1, m = 1, i;

	while (*(s + count) != '\0')
	{
		if (size > 0 && (*(s + count) < '0' || *(s + count) > '9'))
			break;

		if (*(s + count) == '-')
			pn *= -1;

		if ((*(s + count) >= '0') && (*(s + count) <= '9'))
		{
			if (size > 0)
				m *= 10;
			size++;
		}
		count++;
	}

	for (i = count - size; i < count; i++)
	{
		oi = oi + ((*(s + i) - 48) * m);
		m /= 10;
	}
	return (oi * pn);
}
