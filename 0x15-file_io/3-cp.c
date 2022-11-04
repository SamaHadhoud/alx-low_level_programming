#include "main.h"

/**
 * main - copies one file to another
 * @argc: should be 3 (./a.out copyfromfile copytofile)
 * @argv: first is file to copy from (fd_1), second is file to copy to (fd_2)
 * Return: 0 (success), 97-100 (exit value errors)
 */
int main(int argc, char *argv[])
{
	int fd_1, fd_2, n_read, n_wrote;
	char *buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd_2 = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (fd_2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	fd_1 = open(argv[1], O_RDONLY);
	if (fd_1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	
	while ((n_read = read(fd_1, buffer, 1024)) != 0)
	{
		if (n_read == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		n_wrote = write(fd_2, buffer, n_read);
		if (n_wrote == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}

	if (close(fd_2) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_2);
		exit(100);
	}
	else
	{
		close(fd_2);
	}
	if (close(fd_1) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_1);
		exit(100);
	}
	else
	{
		close(fd_1);
	}
	return (0);
}
