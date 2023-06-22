/**
  *main - find out if char is uppercase
  * @c: character to be checked
  * Return: 1 if c is uppercase
  * 0 otherwise
  */

int _isupper(int c)
{
	int c;

	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else if (c >= 'a' && c <= 'z')
	{
		return (0);
	}
}
