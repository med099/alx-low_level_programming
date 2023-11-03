#include <stdlib.h>
/**
  * _realloc - function that reallocates a memory block using malloc and free
  * @ptr: pointer to memory
  * @old_size: old size
  * @new_size: new size
  * Return: pointer to memory reallocted
  */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	char *p, *old_ptr;

	if (new_size == old_size)
		return (ptr);
	if (ptr != NULL && new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		p = malloc(new_size);
		return (p);
	}
	if (new_size > old_size)
	{
		p = malloc(new_size * sizeof(char));
		old_ptr = ptr;
		i = 0;
		while (i < old_size)
		{
			p[i] = old_ptr[i];
			i++;
		}
		free(ptr);
		return (p);
	}
	return (ptr);
}
