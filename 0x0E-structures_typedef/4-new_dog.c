#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 *
 * @name: name
 * @age: age
 * @owner: name of owner
 *
 * Return: a new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int i, len1, len2;
	dog_t *newdog;
	char *a, *b;

	len1 = 0;
	for (i = 0; name[i] != '\0'; i++)
	{
		len1++;
	}

	len2 = 0;
	for (i = 0; owner[i] != '\0'; i++)
	{
		len2++;
	}

	newdog = malloc(sizeof(dog_t));
	if (newdog == NULL)
		return (NULL);

	a = malloc(sizeof(char) * (len1 + 1));
	if (a == NULL)
	{
		free(newdog);
		return (NULL);
	}
	for (i = 0; i < len1; i++)
	{
		a[i] = name [i];
	}

	a[i] = '\0';
	newdog->name = a;
	newdog->age = age;
	
	b = malloc(sizeof(char) * (len2 + 1));
	if (b == NULL)
	{
		free(a);
		free(newdog);
		return (NULL);
	}
	for (i = 0; i < len2; i++)
	{
		b[i] = owner[i];
	}
	
	b[i] = '\0';
	newdog->owner = b;
	return (newdog);
}
