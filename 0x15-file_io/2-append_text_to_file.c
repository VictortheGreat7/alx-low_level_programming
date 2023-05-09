#include "main.h"

/**
* append_text_to_file - Appends text at the end of a file
* @filename: Name of the file
* @text_content: NULL terminated string to add at the end of the file
* Return: 1 on success and -1 on failure
*/

int append_text_to_file(const char *filename, char *text_content)
{
int fd = open(filename, O_WRONLY | O_APPEND);
size_t text_length;
ssize_t bytes_written;

if (filename == NULL)
return (-1);
if (fd == -1)
return (-1);

if (text_content != NULL)
{
text_length = strlen(text_content);
bytes_written = write(fd, text_content, text_length);
if (bytes_written != (ssize_t) text_length)
{
close(fd);
return (-1);
}
}
else
{
text_length = 0;
bytes_written = 0;
}
close(fd);
return (1);
}
