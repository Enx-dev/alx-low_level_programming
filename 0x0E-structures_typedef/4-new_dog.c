#include "dog.h"
/**
 * new_dog - create a new dog
 * @name: name of dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: a dog_t type
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t newDog;
	dog_t *pd = &newDog;

	(*pd).name = name;
	(*pd).age = age;
	(*pd).owner = owner;

	return (pd);
}
