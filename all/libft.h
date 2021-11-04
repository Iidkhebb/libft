#ifndef LIBFT_H
#define LIBFT_H

# include <unistd.h>
# include <stdlib.h>

# include <stdio.h>
# include <string.h>

typedef struct	s_list
{
	void			*content;
	struct s_list	*next;
}				t_list;

size_t ft_strlen(const char *str);
char *ft_strncpy(char *dest, const char *src, size_t n);
int ft_strncmp(const char *str1, const char *str2, size_t n);
char *ft_strncat(char *dest, const char *src, size_t n);
size_t ft_strlcpy(char *dest, const char *src, size_t size);
char *ft_strcpy(char *dest, const char *src);
char *ft_strcat(char *dest, const char *src);
void ft_bzero(void *s, size_t n);
char *ft_strchr(const char *str, int c);
size_t ft_strlcat(char *dst, const char *src, size_t size);
char *ft_strrchr(const char *str, int c);
char *  ft_strnstr(const char *s1, const char *s2, size_t n);
int ft_atoi(const char *str);
int ft_toupper(int c);
int ft_tolower(int c);
char *ft_substr(char const *s, unsigned int start, size_t len);
char *ft_strjoin(char const *s1, char const *s2);
char *ft_strtrim(char const *s1, char const *set);
char **ft_split(char const *s, char c);

int	ft_isalpha(int a);
int ft_isalnum(int a);
int ft_isascii(int a);
int ft_isblank(int a);
int ft_iscntrl(int a);
int	ft_isdigit(int a);
int ft_isgraph(int a);
int ft_islower(int a);
int ft_isprint(int a);
int ft_ispunct(int a);
int ft_isspace(int a);
int ft_isupper(int a);
int ft_isxdigit(int a);

t_list *ft_lstnew(void *content);

void *ft_memchr(const void *str, int c, size_t n);
int ft_memcmp(const void *str1, const void *str2, size_t n);
void *ft_memcpy(void *dest, const void * src, size_t n);
void *ft_memset(void *str, int c, size_t n);
char *ft_strdup(const char *s);
void * ft_calloc( size_t elementCount, size_t elementSize );
void *ft_memmove(void *str1, const void *str2, size_t n);

#endif