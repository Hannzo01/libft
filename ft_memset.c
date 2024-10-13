#include "libft.h"
void *ft_memset(void *s, int c, size_t n)
{
    size_t i = 0;
    unsigned char *p = s;
    while(i < n)
    {
        p[i] = c;
        i++;
    }
    return s;
}
int main()
{
    int arr = 257;
    ft_memset(&arr,0,1);
    printf("%d\n", arr);
}