#include "lists.h"
/**
 * print_listint - this function prints the data in the listint_t lists
 *@h: this is the pointer to the first node
 *Return: the number of nodes in the list
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;
	const listint_t *ptr;

	ptr = h;
	while (ptr != NULL)
	{
		printf("%d\n", ptr->n);
		count++;
		ptr = ptr->next;
	}
	return (count);
}
