#include "lists.h"
/**
 *print_list - this function prints the elements of a lists
 * @h: this is the pointer to the head of the list
 *list_t: this is typedef for struct list
 *Return: count of the nodes
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
	h = h->next;
	count++;
	}
	return (count);
}
