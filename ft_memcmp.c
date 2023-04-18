/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbenjami <rbenjami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 12:40:02 by rbenjami          #+#    #+#             */
/*   Updated: 2023/04/18 12:40:18 by rbenjami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t i;
	unsigned char *str1 = (unsigned char *)s1;
	unsigned char *str2 = (unsigned char *)s2;

	i = 0;
	if (n == i)
		return (0);
	while (i < n && str1[i] == str2[i])
		i++;
	return (str1[i] - str2[i]);
}