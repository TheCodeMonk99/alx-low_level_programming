/**
  * _memset - function that fills memory with
  * constant byte
  * @s: pointer
  * @b: byte of fill
  * @n: no. of bytes
  * Return: pointer to s
  */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
