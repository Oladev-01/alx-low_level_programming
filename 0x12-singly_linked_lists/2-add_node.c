#include "lists.h"
/**
 *add_node - this function adds a new node
 * to the beginning of the linked list
 *@head: this is a pointer to a pointer that contains
 * the address of the first node in the list
 *@str: this is the string to be copied
 *Return: a pointer to the new node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	if (head == NULL || str == NULL)
		return (NULL);

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	new->len = strlen(new->str);
	new->next = *head;
	*head = new;


	return (new);
}
