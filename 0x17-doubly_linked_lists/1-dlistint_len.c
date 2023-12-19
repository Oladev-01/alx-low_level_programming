#include "lists.h"
/**
 * dlistint_len - this function returns the number of nodes of the list
* @h: this is the pointer to the first node
* Return: the size of the list
*/
size_t dlistint_len(const dlistint_t *h)
{
	size_t size = 0;
	const dlistint_t *ptr;

	if (h == NULL)
		return (0);
	ptr = h;
	while (ptr)
	{
		size++;
		ptr = ptr->next;
	}
	return (size);
}
