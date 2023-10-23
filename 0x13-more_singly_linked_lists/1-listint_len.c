#include "lists.h"
/**
 * listint_len - this function returns the number
 * of elementd(nodes) of a listint_t lists
 *@h: this is the pointer to the first node
 *Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;
	const listint_t *ptr;

	ptr = h;
	while (ptr != NULL)
	{
		count++;
		ptr = ptr->next;
	}
	return (count);
}
