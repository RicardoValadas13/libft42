/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricardovaladas <ricardovaladas@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 12:40:48 by rbenjami          #+#    #+#             */
/*   Updated: 2023/10/26 11:12:14 by ricardovala      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*d;
	char	*s;

	if (dest == src)
		return (dest);
	if (!dest && !src)
		return (0);
	s = (char *)src;
	d = (char *)dest;
	if (dest > src)
		while (n--)
			d[n] = s[n];
	else
		ft_memcpy(d, s, n);
	return (d);
}
