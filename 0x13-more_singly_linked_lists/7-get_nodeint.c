#include "lists.h"
/**
 * get_nodeint_at_index - this function returns the
 * nth imdex of a node starting at index 0
 *@head: pointer to the first node
 *@index: index of the desired node
 *Return: the pointer to the desired node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ptr;
	unsigned int n = 0;

	ptr = head;
	if (head == NULL)
		return (NULL);
	while (ptr != NULL && n < index)
	{
		ptr = ptr->next;
		n++;
	}
	if (n != index)
		return (NULL);
	else
		return (ptr);
}
