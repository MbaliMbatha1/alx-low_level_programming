#include "main.h"

/**
 * _isalpha - test whether a character is from English alphabet.
 * @c: character to be checked.
 * Return: 1 if the character is an English character.
 * 0 if the character is not an English character.
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
