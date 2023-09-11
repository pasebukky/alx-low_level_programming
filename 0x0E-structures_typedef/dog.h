#ifndef dog_h
#define dog_h

/**
  * struct dog - the entry point of the program about a poppy
  * @name: the dog's name
  * @age: the dog's age
  * @owner: the name of the owner of the dog
  *
  */

struct dog
{
char *name;
float age;
char *owner;
};


/* Defining a new type dog_t as a new name for struct dog. */

typedef struct dog dog_t;




/* Function prototypes */

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);



#endif
