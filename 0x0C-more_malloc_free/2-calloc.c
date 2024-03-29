#include "main.h"
#include <stdlib.h>

/**
 *  * _calloc - allocates memory for an array
 *   * @nmemb: first integer
 *   * @size: second integer
 *    * Return: pointer to allocated memory
 *    * NULL if nmemb or size is 0
 *    * NULL if malloc fails
 *    **/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int x;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (!ptr)
		return (NULL);
	for (x = 0; x < (nmemb * size); x++)
		ptr[x] = 0;
	return (ptr);
}
