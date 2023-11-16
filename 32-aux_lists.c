#include "shell.h"

/**
 * add_rvar_node - adds a variable at the end
 * of a r_var list.
 * @head: head of the linked list.
 * @lvar: length of the variable.
 * @val: value of the variable.
 * @lval: length of the value.
 * Return: address of the head.
 */

r_var *add_rvar_node(r_var **head, int lvar, char *val, int lval)
{
	r_var *fresh, *temp;

	fresh = malloc(sizeof(r_var));
	if (fresh == NULL)
		return (NULL);

	fresh->len_var = lvar;
	fresh->val = val;
	fresh->len_val = lval;

	fresh->next = NULL;
	temp = *head;

	if (temp == NULL)
	{
		*head = fresh;
	}
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = fresh;
	}

	return (*head);
}

/**
 * free_rvar_list - frees a r_var list
 * @head: head of the linked list.
 * Return: no return.
 */
void free_rvar_list(r_var **head)
{
	r_var *temp;
	r_var *curr;

	if (head != NULL)
	{
		curr = *head;
		while ((temp = curr) != NULL)
		{
			curr = curr->next;
			free(temp);
		}
		*head = NULL;
	}
}
