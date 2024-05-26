#include <stdio.h>
#include <math.h>
#include "search_algos.h"

/**
 * jump_list - Searches for a value in a sorted singly linked list
 *             using the Jump search algorithm
 * @list: Pointer to the head of the list
 * @size: Number of nodes in the list
 * @value: Value to search for
 *
 * Return: Pointer to the first node where value is located, or NULL if not found
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t step, prev_idx;
	listint_t *prev, *current;

	if (list == NULL || size == 0)
		return (NULL);

	step = sqrt(size);
	prev = list;
	current = list;

	// Perform jumps to find the block where the value may be present
	while (current->index + step < size && current->n < value)
	{
		prev = current;
		for (prev_idx = current->index; current->index < prev_idx + step && current->next; current = current->next)
			;
		printf("Value checked at index [%lu] = [%d]\n", current->index, current->n);
		if (current->n >= value)
			break;
	}

	// If we have reached beyond the last node in jumps
	if (current->index + step >= size)
	{
		prev = current;
		while (current->next)
			current = current->next;
	}

	printf("Value found between indexes [%lu] and [%lu]\n", prev->index, current->index);

	// Perform linear search in the block found
	for (; prev && prev->index <= current->index; prev = prev->next)
	{
		printf("Value checked at index [%lu] = [%d]\n", prev->index, prev->n);
		if (prev->n == value)
			return (prev);
	}

	return (NULL);
}
