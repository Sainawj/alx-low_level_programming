#ifndef MAIN_IO
#define MAIN_IO

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

ssize_t rd_txtfl(const char *fname, size_t letas);
int create_fl(const char *fname, char *txt_content);
int append_txt2fl(const char *fname, char *txt_content);
int _putchar(char chr);

#endif
