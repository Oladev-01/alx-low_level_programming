#include "search_algos.h"
/**
 * jump_list - this function uses a jump search to search
 * through a sorted array for occurrence of a target value,
 * it returns a pointer to the index of the node where the value is found
 * @list: this is the pointer to the head node of the list
 * @size: the size of the list
 * @value: the target value being searched for in the node
 * Return: the pointer to the index of the node or NULL
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t step, prev_idx;
	listint_t *prev, *current;

	if (list == NULL || size == 0)
		return (NULL);

	step = sqrt(size);
	current = list;

	while (current->index + step < size && current->n < value)
	{
		prev = current;
		for (prev_idx = current->index;
			 current->index < prev_idx + step && current->next;
			 current = current->next)
			;
		printf("Value checked at index [%lu] = [%d]\n", current->index, current->n);
		if (current->n >= value)
			break;
	}
	return (ptr(prev, current, value));
}


/**
 * ptr - this function returns a pointer to the node
 *  where the searched value is located
 * @prev: the pointer to the previous node
 * @current: the pointer to the current node
 * @value: the data being searched
 * Return: pointer to the node
*/
listint_t *ptr(listint_t *prev, listint_t *current, int value)
{
	if (current->n < value)
	{
		printf("Value found between indexes [%lu] and [%lu]\n",
			   current->index, current->index + 3);
		while (current->next)
		{
			printf("Value checked at index [%lu] = [%d]\n", current->index, current->n);
			if (current->n == value)
				return (current);
			current = current->next;
		}
	}
	printf("Value found between indexes [%lu] and [%lu]\n",
		   prev->index, current->index);
	while (prev && prev->index <= current->index && prev->n <= value)
	{
		printf("Value checked at index [%lu] = [%d]\n", prev->index, prev->n);
		if (prev->n == value)
			return (prev);
		prev = prev->next;
	}
	return (NULL);
}
