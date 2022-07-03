#ifndef STRUCT_TYPEDEF_H
#define STRUCT_TYPEDEF_H

/**
 * struct dog - New data type "dog"
 * @name: Name of the dog
 * @owner: Name of the owner
 * @age: Age of the dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* STRUCT_TYPEDEF_H */
