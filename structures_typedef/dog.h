#ifndef DOG_FILE
#define DOG_FILE
struct dog
{
	/**
	 * @name: name of the dog
	 */
	char *name;
	/** 
	 * @age: the dog age
	 */
	float age;
	/**
	 * @owner: name of the dog owner
	 */
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
