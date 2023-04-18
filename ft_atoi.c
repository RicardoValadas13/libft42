/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbenjami <rbenjami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 11:23:48 by rbenjami          #+#    #+#             */
/*   Updated: 2023/04/18 14:05:32 by rbenjami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int	ft_atoi(char *nptr)
{
	int signal;
	int nbr;

	nbr = 0;
	signal = 1;
	if (*nptr == 32 || (*nptr > 8 && *nptr < 14))
		nptr++;
	if (*nptr == '-')
	{
		signal *= -1;
		nptr++;
	}
	while (*nptr >= '0' && *nptr <= '9')
	{
		nbr = nbr * 10 + *nptr - 48;
		nptr++;
	}
	return (nbr * signal);
}