#include <stdlib.h>
int ft_strlen(char *str)
{
    int cnt;

    cnt = 0;
    while(*str++)
        cnt++;
    return(cnt);
}

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t src_len;
    size_t dst_len;
    size_t i;

    src_len = ft_strlen((char *)src);
    dst_len = ft_strlen(dst);
    if (dst_len < size)
    {
        while (src[i] && i < size - dst_len - 1)
        {
            dst[dst_len + i] = src[i];
            i++;
        }
        dst[dst_len + i] = '\0';
    }
    return (src_len + dst_len);
}

/*#include <stdio.h>
#include <bsd/string.h>


int main()
{
    char str[20] = "Ola a";
    char str1[7] = "Todos";
    printf("Original: %ld", strlcat(str, str1, 5));
    printf("Replicated: %ld", ft_strlcat(str, str1, 5));
}*/