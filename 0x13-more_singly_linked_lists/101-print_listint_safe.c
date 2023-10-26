#include "lists.h"
/**
 * print_listint_safe - this function prints the lists within a loop
 * @head: this is the pointer to the first node of the list
 *Return: the number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t num = 0;

	if (head == NULL)
		exit(98);
	while (head != NULL)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		if (head <= head->next)
			exit(98);
		head = head->next;
		num++;
	}
	return (num);
}
