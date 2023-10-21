#include "lists.h"
/**
 * *add_node_end - this function adds a new node at the end of the list
 * @head: this is the pointer to a pointer that contains
 * the address of the first node in the list
 *@str: the string to be copied
 *Return: pointer to the added node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *end, *temp;

	temp = *head;
	if (str == NULL)
		return (NULL);

	end = malloc(sizeof(list_t));
	if (end == NULL)
		return (NULL);
	end->str = strdup(str);
	if (end->str == NULL)
	{
		free(end);
		return (NULL);
	}
	end->len = strlen(str);
	end->next = NULL;
	if (temp == NULL)
	{
		*head = end;
		return (end);
	}

	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = end;

	return (end);
}

