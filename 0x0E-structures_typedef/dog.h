#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Represents a dog with a name, age, and owner
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Description: This structure is used to store info about a dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * init_dog - a function that initialize a variable of type struct dog
 * @d: a pointer to the struct dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
