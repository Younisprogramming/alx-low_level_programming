#include <stdio.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{

	char buf1[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";

	  /*Fd[1] = open(“sample.txt”, O_CREATE);*/

	  write(1, buf1, strlen(buf1));
	  /*Write(1, buf2, read(fd[1], buf2i, 12));*/
}
