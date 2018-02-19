#ifndef DOG_H
#define DOG_H
int _putchar(char c);
/**
 * struct dog - a dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: name of the owner
 *
 * Description: structure for a dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
#endif
