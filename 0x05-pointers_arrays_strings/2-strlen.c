/**
  * _strlen - returns len of string
  * @s: the string to be checked
  * Return: the length of string
  */

int _strlen(char *s)
{
	int i, count;

	count = 0;
	for (i = 0; str[i] != '\0'; i++)
		count++;
	return (count);
}
