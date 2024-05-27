/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricardovaladas <ricardovaladas@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 11:24:46 by rbenjami          #+#    #+#             */
/*   Updated: 2023/10/26 11:16:33 by ricardovala      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	int	cnt;

	cnt = 0;
	if (!str)
		return (0);
	while (str[cnt])
		cnt++;
	return (cnt);
}
