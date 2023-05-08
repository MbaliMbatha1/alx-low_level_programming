#include "main.h"

/**
 * read_textfile - rid & print
 * @filename: mfdam asdfla aldf 
 * @latter: ndasfa dajsdf asd;la 
 *
 * Return: zero!!!!
 */
ssize_t read_textfile(const char *filename, size_t latter)
{
	int kd;
	ssize_t nrd, nbr;
	char *kim;

	if (!filename)
		return (0);

	kd = open(filename, O_RDONLY);

	if (kd == -1)
		return (0);

	kim = malloc(sizeof(char) * (latter));
	if (!kim)
		return (0);

	nrd = read(kd, kim, latter);
	nbr = write(STDOUT_FILENO, kim, nrd);

	close(kd);

	free(kim);

	return (nbr);
}
