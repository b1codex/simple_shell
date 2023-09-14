#ifndef _SHELL_H
#define _SHELL_H

/** #### environment variables #### ***/

extern char **environ;

/**### MACROS ###**/

#define BUFSIZE 1024
#define DELIM " \t\r\n\a"
#define PRINTER(c) (write(STDOUT_FILENO, c, _strlen(c)))

/**#### Used Libraries ####**/

#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <string.h>
#include <sys/wait.h>
#include <stdlib.h>
#include <errno.h>
#include <linux/limits.h>
#include <signal.h>
#include <sys/stat.h>
#include <fcntl.h>

/* #### String amd their functions #### */

char *_strtok(char *str, const char *tok);
unsigned int check_delim(char c, const char *str);
char *strncpy(char *dest, char *src, int n);
int _strlen(char *s);
int  _putchar(char c);
int _puts(char *str);
int _atoi(char *s);
int _isalpha(int c);
int _strcmp(char *s1, char *s2);
int intlen(int num);
int _strncmp(const char *s1, const char *s2, size_t n);
void _puts(char *str);
void array_rev(char *arr,  int len);
char *itoa(unsigned int n);
char *strcat(char *dest, char *src);
char *strcpy(char *dest, char *src);
char *strchr(char *s, char c);
char *strdup(char *str);

/** ### Managing the memory ### **/

void free_env(char **env);
void *_calloc(unsigned int size);
char *_memcpy(char dest, char *src, unsigned int n);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
void *fill_an_array(void *a, int el, unsigned int len);
void *free_all(char **input, char *line);

/** ## Setting up the input function ## **/

void prompt (void);
void signal_to_handle(int sig);
char *_getline(void);

/** ## Parsing and Extracting commands ## **/
int path_cmd(char **line);
char **parse_cmd(char *cmd);
char *getenvc
