#include "lists.h"
/**
 * print_listint_safe - this function prints the lists within a loop
 * @head: this is the pointer to the first node of the list
 *Return: the number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t num = 0, node = 0;
	const listint_t *slow, *fast;

	if (head == NULL)
		exit(98);
	slow = head;
	fast = head;
	while (slow && fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast)
		{
			printf("[%p] %d\n", (void *)slow, slow->next);
			break;
		}
	}
	slow = head;
	fast 
