#include "lists.h"
/**
 * print_listint - Entry Point
 * @h: head
 * Return: 0
 */
size_t print_listint(const listint_t *h)
{
	int count = 0;

<<<<<<< HEAD
while (h != NULL)
{
printf("%i\n", h->n);
h = h->next;
size++;
}
return (size);
=======
	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}

	return (count);
>>>>>>> fa4a255c6f60d5f2537819a13080641950c3b1ab
}
