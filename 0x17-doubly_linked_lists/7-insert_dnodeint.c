#include "lists.h"
/**
 * insert_dnodeint_at_index - this function adds new node at an index
 * @h: this is the pointer to the pointer to the head
 * @idx: this is the index of the new node to be added
 * @n: the data to be inserted into the new node
 * Return: the pointer to the new node
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *ptr;
	unsigned int index = 0;

	if (!h)
		return (NULL);
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	ptr = *h;
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;
	if (idx == 0 || !(*h))
	{
		new_node->next = *h;
		(*h)->prev = new_node;
		*h = new_node;
		return (new_node);
	}
	while (ptr && index < idx - 1)
	{
		ptr = ptr->next;
		index++;
	}
	if (!ptr)
	{
		free(new_node);
		return (NULL);
	}
	new_node->next = ptr->next;
	if (ptr->next)
		ptr->next->prev = new_node;
	ptr->next = new_node;
	new_node->prev = ptr;

	return (new_node);
}
