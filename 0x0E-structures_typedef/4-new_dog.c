#include "dog.h"
#include <stdlib.h>

/**
 * _strcpy - a function that copies the string src to dest
 * @dest: destination
 * @src: source
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/**
 * new_dog - function that creates a new dog
 * @name: name
 * @age: age
 * @owner: owner
 * Return: pointer to structer at the heap
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	int nlen, olen;
	dog_t *new;

	new = malloc(sizeof(dog_t));
	if (!new)
		return (NULL);

	nlen = 0;
	while (name[nlen])
		nlen++;
	new->name = malloc(sizeof(char) * nlen);
	if (!(new->name))
	{
		free(new);
		return (NULL);
	}
	_strcpy(new->name, name);

	olen = 0;
	while (owner[olen])
		olen++;
	new->owner = malloc(sizeof(char) * olen);
	if (!(new->owner))
	{
		free(new->name);
		free(new);
		return (NULL);
	}
	_strcpy(new->owner, owner);

	new->age = age;
	return (new);
}
