#include "lists.h"
/**
 * delete_dnodeint_at_index - this function deletes a node at an index
 * @head: this is the pointer to the pointer to the beginning of the node
 * @index: this is the index of the node to be deleted
 * Return: 1 for success or -1 for fail
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *ptr, *hold;
	unsigned int num = 0;

	if (!head || !(*head))
		return (-1);
	ptr = *head;
	if (index == 0)
	{
		(*head) = (*head)->next;
		if (!(*head))
			return (-1);
		(*head)->prev = NULL;
		free(ptr);
		return (1);
	}

	while (ptr && num < index - 1)
	{
		ptr = ptr->next;
		num++;
	}
	if (!ptr || (!ptr->next))
		return (-1);
	hold = ptr->next;
	ptr->next = ptr->next->next;
	if (ptr->next)
		ptr->next->prev = ptr;
	free(hold);
	return (1);
}
