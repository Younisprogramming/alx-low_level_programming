#include "main.h"
/**
 * read_textfile - aaa
 * @filename: name of the file
 * @letters: number of char...
 * Return: 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *fp;
	int n;
	char c;
	unsigned int i = 0;

	if (!filename)
		return (0);
	n = (fp = fopen(filename, "r"));
	if (fp == -1)
		return (0);
	while (i <= letters)
	{
		c = fgetc(fp);
		if (feof(fp))
			break;
		_putchar(c);
		i++;
	}
	fclose(fp);
	return (i);
}