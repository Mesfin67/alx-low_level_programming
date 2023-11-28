#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>

/**
 * append_text_to_file - Appends text content to an existing file.
 * @filename: The name of the file to which to append text.
 * @text_content: The content to append to the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_descriptor, write_result;

	if (filename == NULL)
		return (-1);

	file_descriptor = open(filename, O_WRONLY | O_APPEND);
	if (file_descriptor == -1)
		return (-1);

	if (text_content != NULL)	
	{
		write_result = write(file_descriptor, text_content, strlen(text_content));
	if (write_result == -1)
	{
		close(file_descriptor);
		return (-1);
	}
	}

	close(file_descriptor);
	return (1);
}

