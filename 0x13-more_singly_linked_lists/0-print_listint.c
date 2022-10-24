#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint - Entry Point
 * @h: head
 * Return: 0
 */
size_t print_listint(const listint_t *h)
{
	int count = 0;

while (h != NULL)
{
printf("%i\n", h->n);
h = h->next;
size++;
}
return (size);
	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}

	return (count);
}
