/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbenjami <rbenjami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 11:24:09 by rbenjami          #+#    #+#             */
/*   Updated: 2023/04/18 14:08:23 by rbenjami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void    *ft_memset(void *s, int c, size_t n)
{
    unsigned char *str;
    unsigned char cbyte;

    str = (unsigned char *)s;
    cbyte = (unsigned char)c;
    while(n--)
    {
        *str++ = cbyte;
    }
    return (s);
}