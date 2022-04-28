#include <stdlib.h>

int ft_strlen(char *str)
{
    int len;
    
    while(*str != '\0')
    {
        str++;
        len++;
    }
    return (len);
}

char    *ft_strdup(char *s)
{
    char    *dup;
    int     len;
    
    len = ft_strlen(s);
    dup = malloc(len * sizeof(char));
    while (*s != '\0')
        *dup++ = *s++;
    dup = dup - len;
    return (dup);
}
