/**
  * print_dog - prints a variable of struct dog
  * @d: pointer to variable
  * Return: Always 0
  */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return (1);
	if (d->name == NULL)
		d->name = "(nil)";
	if (d->owner == NULL)
		d->owner = "(nil)";
	printf("Name: %s\nAge: %d\nOwner: %s\n", d->name, d->age, d->owner);
}
