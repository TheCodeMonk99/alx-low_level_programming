/**
  * _strcat - concatanates two strings
  * @dest: first string
  * @src: string to be appended to dest
  *
  * Return: Appended string dest
  */

char *_strcat(char *dest, char *src);
{
	int i, m;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	i++;
	for (m = 0; src[m] != '\0'; m++)
	{
		dest[i] = src[m];
		i++;
	}
	dest[i + 1] = '\0';
	return (dest);
}
