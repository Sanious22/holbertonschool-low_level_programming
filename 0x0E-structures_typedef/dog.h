#ifndef DOG_H
#define DOG_H
/*Structs*/
/**
 * struct dog - contains data for dog
 * @name: char *
 * @age: float
 * @owner: char *
 *
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
/*Protos*/
void init_dog(struct dog *d, char *name, float age, char *owner);
/*Typeds*/
#endif
