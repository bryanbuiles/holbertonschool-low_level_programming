#ifndef DOG
#define DOG

/**
  * struct dog - main struct
  * @name: Dog name
  * @owner: Dog Owner
  * @age: Dog age
  * Description: My dog
 */

struct dog
{
	char *name;
	char *owner;
	float age;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif
