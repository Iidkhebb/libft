#ifndef LIBFT_H
#define LIBFT_H

# include <unistd.h>
# include <stdlib.h>

typedef struct	s_list
{
	void			*content;
	struct s_list	*next;
}				t_list;

void *ft_memset(void *str, int c, size_t n);
int ft_strlen(char *str);
char *ft_strncpy(char *dest, const char *src, size_t n);
int ft_strncmp(const char *str1, const char *str2, size_t n);
char *ft_strncat(char *dest, const char *src, size_t n);
size_t ft_strlcpy(char *dest, const char *src, size_t size);
char *ft_strcpy(char *dest, const char *src);
char *ft_strcat(char *dest, const char *src);
void ft_bzero(void *s, size_t n);
#endif