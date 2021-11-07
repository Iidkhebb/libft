#include "libft.h"
static int str_count(char const *str,char c)
{
    int i;
    int j;

    i = 0;
    j = 1;
    if(!*str || *str == c)
        j = 0;
    while(str[i])
        if(str[i++] == c && str[i] != c && str[i] != '\0')
            j++;
    return (j);
}

static char *mallocator(int i, int size, char **hub, char *str)
{
    char *tab;
    
    tab = (char *)malloc((i + 1) * sizeof(char));
    if(tab)
    {
        ft_memcpy(tab,str,i);
        return(tab); 
    }    
    else
    {
        while (size--)
            free(hub[size]);
      return (0);
    }
}
static char **str_writer(char **hub,char *str, char c, int words)
{
    int i;
    int l;

    i = 0;
    l = 0;
    while(*str)
    {
        while (str[i] && str[i] != c)
            i++;
        if(i != 0 && l < words)
        {
            hub[l] = mallocator(i, words, hub, str);
            hub[l++][i] = '\0';
            str += i;
            i = 0;
        }
        else
            str += 1;     
    }
    hub[l] = NULL;
    return(hub);
}
char **ft_split(char const *s, char c)
{
    int j;
    char **hub;

    hub = NULL;
    j = str_count(s,c);  
    hub = (char **)malloc((j + 1) * sizeof(char*));
    if(hub == NULL)
        return (NULL);
    str_writer(hub,(char *)s,c,j);
    return (hub);
}

/*
int main()
{
    char x[] = "helllo world";
    char c = ' ';
    char **tab = ft_split(x,c);
    int i = 0;
    while (tab[i] != NULL)
        printf("%s\n", tab[i++]);
}
*/
