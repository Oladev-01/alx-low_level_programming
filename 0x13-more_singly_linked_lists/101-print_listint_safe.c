#include "lists.h"
/**
 * print_listint_safe - this function prints the lists within a loop
 * @head: this is the pointer to the first node of the list
 *Return: the number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t num = 0;
	const listint_t *ptr = head;

	if (head == NULL)
		exit(98);
	while (ptr != NULL)
	{
		printf("[%p] %d\n", (void *)ptr, ptr->n);
		if (ptr <= ptr->next)
			exit(98);
		ptr = ptr->next;
		num++;
	}
	return (num);
}
