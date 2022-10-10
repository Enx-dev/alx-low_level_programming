#ifndef _DOG_H_
#define _DOG_H_

/**
* struct dog - a dog type
* @name: name of dog
* @age: age of dog
* @owner: owner of the dog
*/

void init_dog(struct dog *d, char *name, float age, char *owner);

struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif
