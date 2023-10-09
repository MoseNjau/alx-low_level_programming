#include "dog.h"
#include "stdlib.h"
/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: pointer to new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
unsigned int p, q, i;
dog_t *dog;
if (name == NULL || owner == NULL)
return (NULL);
dog = malloc(sizeof(dog_t));
if (dog == NULL)
return (NULL);
for (p = 0; name[p]; p++)
;
p++;
dog->name = malloc(p *sizeof(char));
if (dog->name == NULL)
{
free(dog);
return (NULL);
}
for (i = 0; i < nl; i++)
dog->name[i] = name[i];
dog->age = age;
for (q = 0; owner[q]; q++)
;
q++;
dog->owner = malloc(q *sizeof(char));
if (dog->owner == NULL)
{
free(dog->name);
free(dog);
return (NULL);
}
for (i = 0; i < q; i++)
dog->owner[i] = owner[i];
return (dog);
}
