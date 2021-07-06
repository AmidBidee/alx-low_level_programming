#ifndef HOLBERTON_H
#define HOLBERTON_H

char *_memset(char *s, char b, unsigned int n);

int _putchar(char c);

char *_memcpy(char *dest, char *src, unsigned int n);

char *_strchr(char *s, char c);

void set_string(char **s, char *to);

void print_diagsums(int *a, int size);

void print_chessboard(char (*a)[8]);

char *_strpbrk(char *s, char *accept);

#endif
