/**
 * _strpbrk - locates first instance of a byte in a string in another string
 * @s: string to scan
 * @accept: string containing characters to match
 *
 * Return: truncated string beginning from the 1st occurrence of matching char
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; *(s + i); i++)
	{
		for (j = 0; *(accept + j); j++)
		{
			if (*(s + i) == *(accept + j))
				return (s + i);
		}
	}
	return ('\0');
}
