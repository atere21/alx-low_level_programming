#include "main.h"
#include <stdlib.h>

/**
<<<<<<< HEAD
 * malloc_checked - Allocates memory using malloc.
 * @b: The number of bytes to be allocated.
 *
 * Return: A pointer to the allocated memory.
 */
void *malloc_checked(unsigned int b)
{
void *mem = malloc(b);

if (mem == NULL)
exit(98);

return (mem);
=======
 * malloc_checked - allocates memory using malloc
 * @b: memory to allocate
 *
 * Return: pointer to allocated memory or normal process termination if error
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
>>>>>>> 712e7aed242295931b6b9fffca391f8f13493ae5
}
