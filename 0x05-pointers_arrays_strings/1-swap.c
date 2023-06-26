/**
  * swap_int - swaps the values of 2 int
  *
  * @a: 1st integer
  * @b: 2nd integer
  *
  * Return: Values of swapped integers
  */

void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
