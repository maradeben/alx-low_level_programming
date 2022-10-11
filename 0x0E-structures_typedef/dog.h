#ifndef _DOG_H_
#define _DOG_H_
/**
 * struct dog - dog datatype
 * @name: of dog
 * @age: of dog
 * @owner: of dog
 *
 * Description: represent attributes of a dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedf struct dog dog_t;

#endif /* _DOG_H_ */
