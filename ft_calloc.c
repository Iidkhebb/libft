#include "libft.h"
void * ft_calloc( size_t elementCount, size_t elementSize )
{
    void *ptr; 
    
    ptr = malloc(elementCount * elementSize);
    if (ptr == NULL)
        return(0);
    ft_memset(ptr, 0, elementCount * elementSize);
    return(ptr);
}