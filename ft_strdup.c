/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbenjamim <rbenjamim@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 09:25:50 by rbenjamim         #+#    #+#             */
/*   Updated: 2023/04/20 09:42:50 by rbenjamim        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strdup(const char  *s)
{
    char *dupstr;
    int i;

    i = 0;
    dupstr = (char *)malloc(ft_strlen(s) * sizeof(char) + 1);
    if (!dupstr)
        return (0);
    while (dupstr[i])
    {
        dupstr[i] = s[i];
        i++;
    }
    dupstr[i] = '\0';
    return (dupstr);
}