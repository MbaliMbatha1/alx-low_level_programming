#include "main.h"

/**
 * create_file - this funciton creates a file
 * @filename: this will be the name of the file.
 * @text_content: this will be what is written in the file.
 *
 * Return: 1 if success else -1 
 */
int create_file(const char *filename, char *text_content)
{
	int gf;
	int conlatter;
	int yty;

	if (!filename)
		return (-1);

	gf = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (gf == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (conlatter = 0; text_content[conlatter]; conlatter++)
		;

	yty = write(gf, text_content, conlatter);

	if (yty == -1)
		return (-1);

	close(gf);

	return (1);
}
