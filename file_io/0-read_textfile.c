#include "main.h"

/**
 * read_textfile - Function
 * @filename: Name of the target file
 * @letters: number letters to print
 * Description: Return number of letters
 * Return: Result
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file = open(filename, O_RDONLY);
	char *str = malloc(sizeof(char) * letters);

	if (file == -1)
		return (0);

	read(file, str, letters);
	str[letters] = '\0';

	close(file);
	printf("%s", str);

	return (strlen(str));
}
