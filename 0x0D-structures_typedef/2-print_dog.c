#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/*if d is null, print nothing
	if an element of d is null, print (nil)
	for age, print only two digits after decimal
	stdlib allowed

	Name: Django
	Age: 3.5
	Owner: Jay
*/
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name != NULL)
		printf("Name: %s\n", d->name);
	else
		printf("Name: (nil)\n");
	if (d->age != d->age)
		printf("Age: %.1f\n", d->age);
	else
		printf("Age: (nil)\n");
	if (d->owner != NULL)
		printf("Owner: %s\n", d->owner);
	else
		printf("Owner: (nil)\n");

}
