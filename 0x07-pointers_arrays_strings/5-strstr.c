/**
 * _strstr - returns rest of a string beginning from 1st instance of a substr
 * @haystack: string to scan
 * @needle: string to match
 *
 * Return: see function description above, NULL is substr not found
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j, c, nl = 0;

	while (*(needle + nl))
		nl++;

	for (i = 0; *(haystack + i); i++)
	{
		c = i;
		for (j = 0; *(needle + j); j++)
		{
			if (*(haystack + c) == *(needle + j))
			{
				if (j == nl - 1)
					return (haystack + c - j);
				c++;
			}
			else
			{
				break;
			}
		}
	}

	return ('\0');
}
