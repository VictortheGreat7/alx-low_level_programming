#include "main.h"

/**
* create_file - Creates a file
* @filename: Name of the file to be created
* @text_content: A NULL terminated string to write to the file
* Return: 1 on success, -1 if filename is NULL and,
* on failure (file can not be created,
* file can not be written,
* write “fails”, etc…)
*/

int create_file(const char *filename, char *text_content)
{
int flags = O_WRONLY | O_CREAT | O_TRUNC;
int mode = S_IRUSR | S_IWUSR;
int fd = open(filename, flags, mode);
size_t len = strlen(text_content);
ssize_t bytes_written = write(fd, text_content, len);

if (filename == NULL)
return (-1);
if (text_content == NULL)
text_content = "";
if (fd == -1)
return (-1);
if (text_content != NULL)
{
if (bytes_written == -1 || bytes_written != (ssize_t) len)
{
close(fd);
return (-1);
}
}
close(fd);
return (1);
}
