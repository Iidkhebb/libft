#include "libft.h"
static int number_of_str(char const *str,char c)
{
    int i;
    int j;

    i = 0;
    j = 1;
    while(str[i] != '\0')
    {
        if(str[i + 1] == c && str[i] != c)
            j++;
        i++;
    }
    return (j);
}
static char *mallocator(int k)
{
    char *tab;
    tab = (char *)malloc((k + 1) * sizeof(char));
    if(!(tab))
        return (0);
    return(tab);    
}
static char **word_maker(char **tab,char const *str, int size, char c)
{
    int i;
    int k;
    int l;

    i = 0;
    k = 0;
    l = 0;
    while(size-- != 0)
    {
        while(str[i] != '\0' && str[i++] != c)
            k++;
        if(k != 0)
        {
            tab[l] = mallocator(k);
            ft_memcpy(tab[l],str,k);
            tab[l++][k] = '\0';
            str += i;
            k = 0;
            i = 0;
        }
        else
            size++;
            str += i; 
            i = 0;
    }
    return (tab);
}
char **ft_split(char const *s, char c)
{
    int j;
    char **hub;

    j = number_of_str(s,c);  
    hub = (char **)malloc((j + 1) * sizeof(char*));
    if(!(hub))
        return (0);
    word_maker(hub,s,j,c);
    return (hub);
}
/*
int main()
{
    char x[] = "helloiiiiiworldiiiihlll";
    char c = 'i';
    char **tab = ft_split(x,c);
    for(int i =0; i < 3 ;i++)
    {
        printf("%s\n",tab[i]);
    }
}
*/