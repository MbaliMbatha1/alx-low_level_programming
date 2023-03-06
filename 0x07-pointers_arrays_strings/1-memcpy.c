/**
 * _memcpy - copies n bytes from a memory area to another
 * @dest: memory area to copy to
 * @src: memory area to copy from
 * @n: number of bytes to copy from beginning of src
 *
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(dest + i) = *(src + i);

	return (dest);
}
