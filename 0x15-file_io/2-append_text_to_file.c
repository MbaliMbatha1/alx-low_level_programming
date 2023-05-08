#include "main.h"

/**
 * append_text_to_file -at the end of the file add soem text.
 * @filename: this will contain the name of the file.
 * @text_content: contet to be added to the file.
 *
 * Return: 1 -file found else -1
 * even when failed.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int xd;
	int conlatter;
	int yty;

	if (!filename)
		return (-1);

	xd = open(filename, O_WRONLY | O_APPEND);

	if (xd == -1)
		return (-1);

	if (text_content)
	{
		for (conlatter = 0; text_content[conlatter]; conlatter++)
			;

		yty = write(xd, text_content, conlatter);

		if (yty == -1)
			return (-1);
	}

	close(xd);

	return (1);
}
