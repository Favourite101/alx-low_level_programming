#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

void closee(int);

/**
 * main - main function
 * @argc: arg count
 * @argv: arguments to main
 *
 * Return: 0
*/
int main(int argc, char **argv)
{
	int op1, op2, re, wr;
	char *buff;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buff = malloc(sizeof(char) * 1024);
	if (buff == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	op1 = open(argv[1], O_RDONLY);
	re = read(op1, buff, 1024);
	op2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	do {
		if (op1 == -1 || re == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(buff);
			exit(98);
		}
		wr = write(op2, buff, re);
		if (op2 == -1 || wr == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(buff);
			exit(99);
		}
		re = read(op1, buff, 1024);
		op2 = open(argv[2], O_WRONLY | O_APPEND);
	} while (re > 0);
	free(buff);
	closee(op1);
	closee(op2);

	return (0);
}

/**
 * closee - function to close a file
 * @opt: file to close
 *
 * Return: nothing
 */
void closee(int opt)
{
	int cl;

	cl = close(opt);
	if (cl == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", cl);
		exit(100);
	}
}
