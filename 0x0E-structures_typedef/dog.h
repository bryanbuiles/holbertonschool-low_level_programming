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

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
