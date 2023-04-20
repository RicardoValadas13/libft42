/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbenjamim <rbenjamim@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 09:57:39 by rbenjamim         #+#    #+#             */
/*   Updated: 2023/04/20 10:13:04 by rbenjamim        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"
int ft_len(int n)
{
    int len;

    len = 0;
    if (n == 0)
        return (1);
    if (n < 0)
    {
        n *= -1;
        len++;
    }
    while (n > 0)
    {
        n /= 10;
        len++;
    }
    return (len);
}

char    *ft_number(char *str, int n, int len)
{
    while (n > 0)
    {
        str[len] = (n % 10) + 48;
        n /= 10;
        len--;
    }
    return (str);
}
char    *ft_itoa(int n)
{
    char *str;
    int len_n;

    len_n = ft_len(n);
    str = (char *)malloc(len_n + 1);
    if (n < 0)
    {
        str[0] = '-';
        n *= -1;
    }
    if (n == 0)
    {
        str[0] = '0';
        return (str);
    }
    return(ft_number(str, n, len_n));
}
