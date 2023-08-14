#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - frees space assinged to struct dog
 * @d: dog
*/
void free_dog(dog_t *d)
{
	free(d->age);
}