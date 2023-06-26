/**
  * _puts - prints a string, followed by new line
  * @str: string to be printed out
  *
  * Return: Always 0
  */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar(10);
	return (0);
}
