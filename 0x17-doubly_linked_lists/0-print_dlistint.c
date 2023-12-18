#include "lists.h"
/**
 * print_dlistint - this function prints all the elements of a dlistint_t lists
 *@h: this is the pointer to the first node
 *Return: the size of the list
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *ptr;
	size_t num = 0;

	if (h == NULL)
		return (0);

	ptr = h;
	while (ptr)
	{
		printf("%d\n", ptr->n);
		ptr = ptr->next;
		num++;
	}
	return (num);
}
