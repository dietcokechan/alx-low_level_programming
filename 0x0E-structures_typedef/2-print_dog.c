#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints a struct dog
 *
 * @d: struct
 */
void print_dog(struct dog *d)
{
	char n[] = "(nil)";

	if (d != NULL)
	{
		printf("Name: %s\nAge: %.6f\nOwner: %s\n"
				, d->name, d->age, d->owner);
	}
	else
		printf("Name: %s\nAge: %s\nOwner: %s\n"
				, n, n, n);
}
