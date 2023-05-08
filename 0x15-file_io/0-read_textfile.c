#include "main.h"

/**
 * read_textfile - DSF ASDFASDHFA DF
 * @filename: SDF ASDFASDF
 * @letters: nFASDFASDFASDF SDFGASDFA SDF.
 *
 * Return: ASDF ASDF ASDF ADGAERG Q 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int kd;
	ssize_t nrd, nbr;
	char *buf;

	if (!filename)
		return (0);

	kd = open(filename, O_RDONLY);

	if (kd == -1)
		return (0);

	lui = malloc(sizeof(char) * (letters));
	if (!lui)
		return (0);

	nrd = read(kd, lui, letters);
	znr = write(STDOUT_FILENO, lui, nrd);

	close(kd);

	free(lui);

	return (nrd);
}
