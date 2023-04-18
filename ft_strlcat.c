/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbenjami <rbenjami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 12:41:55 by rbenjami          #+#    #+#             */
/*   Updated: 2023/04/18 14:09:37 by rbenjami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t src_len;
    size_t dst_len;
    size_t i;

    i = 0;
    src_len = ft_strlen(src);
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