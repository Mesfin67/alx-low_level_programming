#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_dog - prints a dog struct to the console
 *
 * This function prints a dog struct to the console in the following format:
 *
 * Name: <dog's name>
 * Age: <dog's age> years old
 * Owner: <dog's owner's name>
 *
 * @d: a pointer to the dog struct to be printed
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\nAge: %f\nOwner: %s\n",
		(*d).name != NULL ? d->name : "(nil)",
		(*d).age,
		(*d).owner != NULL ? d->owner : "(nil)");
	}
}
