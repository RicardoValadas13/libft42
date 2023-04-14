/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoifirst.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbenjami <rbenjami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 11:23:41 by rbenjami          #+#    #+#             */
/*   Updated: 2023/04/14 11:26:36 by rbenjami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int ft_atoi(const char *nptr)
{
    int nbr;
    int signal;
    
    nbr = 0;
    signal = 1;
    while (*nptr > 8 && *nptr < 14 || *nptr == ' ')
        nptr++;
    if (*nptr == '-')
        signal *= -1;
    if (*nptr == '+' || *nptr == '-')
        nptr++;
    while (*nptr >= '0' && *nptr <= '9')
    {
        nbr = nbr * 10 + *nptr - 48;
        nptr++;
    }
    return (nbr * signal);
}