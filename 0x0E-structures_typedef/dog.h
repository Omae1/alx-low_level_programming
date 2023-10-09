#ifndef _DOG_H_
#define _DOG_H_
typedef struct dog dog_t;
/**
 * struct dog - contains dogs name; its age and its ownner
 * @name: First member
 * @age: Second member
 * @owner: Third member
 *
 */
struct dog
{
char *name;
float age;
char *owner;
};
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
