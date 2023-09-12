#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a dog struct
 * @name: dog's name
 * @age: dog's age
 * @owner: owner's name
 *
 * Description: A structure representing a dog with its name, age, and owner.
 */
struct dog
{
    char *name;
    float age;
    char *owner;
};

typedef struct dog dog_t;

/**
 * init_dog - Initializes a dog structure with given values.
 * @d: Pointer to the dog structure to initialize.
 * @name: Dog's name.
 * @age: Dog's age.
 * @owner: Owner's name.
 */
void init_dog(struct dog *d, char *name, float age, char *owner);

/**
 * print_dog - Prints information about a dog.
 * @d: Pointer to the dog structure to print.
 */
void print_dog(struct dog *d);

/**
 * new_dog - Creates a new dog structure with specified values.
 * @name: Dog's name.
 * @age: Dog's age.
 * @owner: Owner's name.
 * 
 * Return: Pointer to the newly created dog structure.
 */
dog_t *new_dog(char *name, float age, char *owner);

/**
 * free_dog - Frees memory allocated for a dog structure.
 * @d: Pointer to the dog structure to free.
 */
void free_dog(dog_t *d);

#endif /* DOG_H */

