#ifndef MAIN_H
#define MAIN_H

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

ssize_t read_txtfile(const char *fname, size_t letters);
int create_file(const char *fname, char *txt_content);
int append_txt_to_file(const char *fname, char *txt_content);

#endif

