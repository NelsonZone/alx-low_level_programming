#include "lists.h"

/**
 * free_listint_safe - Frees a linked list safely.
 * @h: A pointer to a pointer to the first node of the list.
 *
 * Return: The number of elements in the freed list.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t len = 0;
	listint_t *current, *next;

	if (h == NULL || *h == NULL)
		return (0);

	current = *h;

	while (current != NULL)
	{
		next = current->next;

		free(current);
		len++;

		if ((void *)next <= (void *)current)
		{
			*h = NULL;
			return (len);
		}

		current = next;
	}

	*h = NULL;

	return (len);
}

