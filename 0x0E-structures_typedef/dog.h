#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - models a dog
 * @name: char * that holds name of dog
 * @age: int that holds age of dog
 * @owner: char * that points to name of owner
 *
 * Description: models a dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

typedef struct dog dog_t;

dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* _DOG_H_ */
