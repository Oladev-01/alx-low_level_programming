#include "lists.h"
/**
 * insert_nodeint_at_index - this function adds a new node at a given index
 *@head: pointer to the pointer that poins to the node
 *@idx: the given index to insert the new node
 *@n: this is the given data to be inserted
 *Return: the pointer to the inserted node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr = *head, *new_node;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	new_node = malloc(sizeof(listint_t));
	if (*head == null || new_node == NULL)
	{
		return (NULL);
	}
	if (idx == 0)
	{
		new_node->n = n;
		new_node->next = ptr;
		ptr = new_node;
		return (new_node);
	}
	else
	{
	while (ptr != NULL && i < idx)
	{
		ptr = ptr->next;
		i++;
	}
	if (ptr == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = ptr->next;
	ptr->next = new_node;
	return (new_node);
	}
}
