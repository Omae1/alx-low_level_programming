#include "lists.h"

/**
*list_len - returns the number of elements of a linked list
*@h: a Linked list
*Return: returns the numeber of elements
*/
size_t list_len(const list_t *h)
{
	size_t elements = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			return (1);
		_putchar(h->len);
		h = h->next;
		elements++;

	}
	return (elements);
}
