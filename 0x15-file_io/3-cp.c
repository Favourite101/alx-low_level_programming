#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

/**
 * main - main function
 * @argc: arg count
 * @argv: arguments to main
 * 
 * Return: 0
*/
int main(int argc, char **argv)
{
    int op1, op2, re, wr, cl1, cl2;
    char *buff;
    
    if (argc != 3)
    {
        dprintf("Usage: cp file_from file_to\n", STDERR_FILENO);
        exit(97);
    }
    buff = malloc(sizeof(char) * 1024);
    if (buff == NULL)
        return (0);
    if (argv[1] == NULL)
    {
        dprintf("Error: Can't read from file %s", argv[1]);
        exit(98);
    }
    op1 = open(argv[1], O_RDWR);
    op2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
    re = read(op1, buff, 1024);
    wr = write(op2, buff, re);

    if (op1 == -1)
    {
        dprintf("Error: Can't read from file %s", argv[1]);
        exit(98);
    }
    if (op2 == -1 || wr == -1)
    {
        dprintf("Error: Can't write to file %s", argv[2]);
        exit(99);
    }
    cl1 = close(op1);
    cl2 = close(op2);
    if (cl1 == -1 || cl2 == -1)
    {
        dprintf("Error: Can't close fd %s", argv[1]);
        exit(100);
    }

    return (0);
}
