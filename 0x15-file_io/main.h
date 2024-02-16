#ifndef MAIN_IO
#define MAIN_IO

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *txt_content);
int append_text_to_file(const char *filename, char *txt_content);
int _putchar(char chr);

#endif
