#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - Creates a new dog
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 *
 * Return: Pointer to the newly created dog (dog_t)
 *         NULL if memory allocation fails or if name/owner is NULL
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog_ptr;
	char *new_name, *new_owner;
	int name_len = 0, owner_len = 0, i;

	if (name == NULL || owner == NULL)
		return (NULL);

	while (name[name_len])
		name_len++;
	while (owner[owner_len])
		owner_len++;

	new_dog_ptr = malloc(sizeof(dog_t));
	new_name = malloc(name_len + 1);
	new_owner = malloc(owner_len + 1);

	if (new_dog_ptr == NULL || new_name == NULL || new_owner == NULL)
	{
		free(new_dog_ptr);
		free(new_name);
		free(new_owner);
		return (NULL);
	}

	for (i = 0; i <= name_len; i++)
		new_name[i] = name[i];
	for (i = 0; i <= owner_len; i++)
		new_owner[i] = owner[i];

	new_dog_ptr->name = new_name;
	new_dog_ptr->age = age;
	new_dog_ptr->owner = new_owner;

	return (new_dog_ptr);
}
