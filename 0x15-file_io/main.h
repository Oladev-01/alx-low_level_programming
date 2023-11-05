#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <string.h>
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
void cpy(const char *file_from, const char *file_to);
void handle_close(int from_s, int to_dest);
void handle_no_read(const char *file_to);
#endif
