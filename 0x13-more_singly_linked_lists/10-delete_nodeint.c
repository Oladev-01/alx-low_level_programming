#include "lists.h"
/**
 * delete_nodeint_at_index - this function deletes a node at any given index
 *@head: pointer to the pointer to the first node
 *@index: the index of the node to be deleted
 *Return: 1 for success
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *ptr = *head, *temp = *head;

	if (*head == NULL || head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(ptr);
		ptr = NULL;
		return (1);
	}
	while (ptr != NULL && i < index - 1)
	{
		ptr = ptr->next;
		i++;
	}
	if (ptr == NULL || ptr->next == NULL)
		return (-1);
	temp = ptr->next;
	ptr->next = temp->next;
	free(temp);
	temp = NULL;
	return (1);
}
