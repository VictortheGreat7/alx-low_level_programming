#include "main.h"

/**
* main - Entry point
* @argc: The number of arguments passed to the program
* @argv: An array of strings containing the arguments passed to the program
* Return: 0 on success, or an error code on failure
*/
int main(int argc, char *argv[])
{
char buffer[1024];
int fd_from = open(argv[1], O_RDONLY);
int fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
ssize_t read_len, write_len;

if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}
if (fd_from == -1 || fd_to == -1)
{
dprintf(STDERR_FILENO, "Error: ");
if (fd_from == -1)
dprintf(STDERR_FILENO, "Can't read from file %s\n", argv[1]);
else
dprintf(STDERR_FILENO, "Can't write to %s\n", argv[2]);
exit(98 + (fd_from == -1));
}
do {
read_len = read(fd_from, buffer, 1024);
if (read_len == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
exit(98);
}
write_len = write(fd_to, buffer, read_len);
if (write_len == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
exit(99);
}
} while (read_len > 0);
if (close(fd_from) == -1 || close(fd_to) == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n",
fd_from == -1 ? fd_from : fd_to);
exit(100);
}
return (0);
}

