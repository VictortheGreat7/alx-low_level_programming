#include "main.h"

/**
* read_textfile - Reads a text file and prints it to the POSIX standard output
* @filename: Name of the file to be read
* @letters: Amount of letters to be read and printed
* Return: Actual number of letters read and printed;
*         if the file can not be opened or read, 0;
*         if filename is NULL, 0;
*         if write fails or does not write the expected amount of bytes, 0
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
int fd  = open(filename, O_RDONLY);
char *buffer = malloc(letters);
ssize_t bytes_read, bytes_written;

bytes_read = read(fd, buffer, letters);
bytes_written = write(STDOUT_FILENO, buffer, bytes_read);

if (filename == NULL)
return (0);
if (fd ==  -1)
return (0);

if (buffer == NULL)
{
close(fd);
return (0);
}

if (bytes_read == -1)
{
free(buffer);
close(fd);
return (0);
}

if (bytes_written == -1 || bytes_written != bytes_read)
{
free(buffer);
close(fd);
return (0);
}
free(buffer);
close(fd);
return (bytes_written);
}
