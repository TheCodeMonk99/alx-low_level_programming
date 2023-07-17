/**
  * init_dog - initializes a variable of struct dog
  * @d: pointer to variable
  * @name: name of dog
  * @age: age of dog
  * @owner: name of owner
  * Return: always success
  */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
