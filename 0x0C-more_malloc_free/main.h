#ifndef FILE_MAIN_H
#define FILE_MAIN_H
int _putchar(char c);
void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
int string_length(char *pointer);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
int _atoi(const char *s);
void print_int(unsigned long int n);
void _puts(char *str);
#endif
