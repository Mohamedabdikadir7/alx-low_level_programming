#include "lists.h"

/**
 * listint_len - return n of elements in list
 * @h: linked list
 *
 * Return: nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
