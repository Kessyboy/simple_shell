#include "shell.h"

/**
 * add_sep_node_end - adds a separator found at the end
 * of a sep_list.
 * @head: head of the linked list.
 * @sep: separator found (; | &).
 * Return: address of the head.
 */
sep_list *add_sep_node_end(sep_list **head, char sep)
{
	sep_list *fresh, *stored;

	fresh = malloc(sizeof(sep_list));
	if (fresh == NULL)
		return (NULL);

	fresh->separator = sep;
	fresh->next = NULL;
	stored = *head;

	if (stored == NULL)
	{
		*head = fresh;
	}
	else
	{
		while (stored->next != NULL)
			stored = stored->next;
		stored->next = fresh;
	}

	return (*head);
}

/**
 * free_sep_list - frees a sep_list
 * @head: head of the linked list.
 * Return: no return.
 */
void free_sep_list(sep_list **head)
{
	sep_list *stored;
	sep_list *curr;

	if (head != NULL)
	{
		curr = *head;
		while ((stored = curr) != NULL)
		{
			curr = curr->next;
			free(stored);
		}
		*head = NULL;
	}
}

/**
 * add_line_node_end - adds a command line at the end
 * of a line_list.
 * @head: head of the linked list.
 * @line: command line.
 * Return: address of the head.
 */
line_list *add_line_node_end(line_list **head, char *line)
{
	line_list *fresh, *stored;

	fresh = malloc(sizeof(line_list));
	if (fresh == NULL)
		return (NULL);

	fresh->line = line;
	fresh->next = NULL;
	stored = *head;

	if (stored == NULL)
	{
		*head = fresh;
	}
	else
	{
		while (stored->next != NULL)
			stored = stored->next;
		stored->next = fresh;
	}

	return (*head);
}

/**
 * free_line_list - frees a line_list
 * @head: head of the linked list.
 * Return: no return.
 */
void free_line_list(line_list **head)
{
	line_list *stored;
	line_list *curr;

	if (head != NULL)
	{
		curr = *head;
		while ((stored = curr) != NULL)
		{
			curr = curr->next;
			free(stored);
		}
		*head = NULL;
	}
}
