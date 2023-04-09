#ifndef MAIN_h
#define MAIN_h
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

ssize_t read_textfile(const char *filename, size_t letters);

#endif
