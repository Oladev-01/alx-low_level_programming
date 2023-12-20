#include "lists.h"
/**
 * get_dnodeint_at_index - this function returns the node at an index
 * @head: this is the pointer to the first node of the list
 * @index: this is the index of the node to be returned
 * Return: the pointer to the node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *ptr;
	unsigned int num = 0;

	if (!head)
	{
		return (NULL);
	}
		ptr = head;
	if (index == 0)
		return (ptr);

	while (ptr->next && num < index)
	{
		ptr = ptr->next;
		num++;
	}
	if (!ptr->next)
		return (NULL);
	return (ptr);
}
