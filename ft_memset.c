/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricardovaladas <ricardovaladas@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 11:24:09 by rbenjami          #+#    #+#             */
/*   Updated: 2023/10/26 11:12:39 by ricardovala      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	cbyte;

	if (!s)
		return (NULL);
	str = (unsigned char *)s;
	cbyte = (unsigned char)c;
	while (n--)
	{
		*str++ = cbyte;
	}
	return (s);
}
