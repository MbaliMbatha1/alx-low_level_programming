/**
 * _strspn - gets the count of chars of a string in another
 * @s: string to scan
 * @accept: string to search
 *
 * Stops counting once a char in s but not in accept is reached
 * Return: count
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	unsigned int len, count = 0;

	for (i = 0; *(s + i); i++)
	{
		len = count;
		for (j = 0; *(accept + j); j++)
		{
			if (*(s + i) == *(accept + j))
			{
				count++;
				break;
			}
		}
		if (len == count)
			break;
	}
	return (count);
}
