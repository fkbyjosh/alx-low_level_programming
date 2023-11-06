#ifndef DOG_H
#define DOG_H

/**
 * struct dog - represents a dog with its attributes
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner of the dog.
 *
 * Description: This structure defines a dog with its name,
 * age, and owner's name.
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
#endif
