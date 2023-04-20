/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbenjami <rbenjami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 12:43:40 by rbenjami          #+#    #+#             */
/*   Updated: 2023/04/20 12:32:08 by rbenjami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned char d;
	int ssize;

	d = c;
	ssize = ft_strlen(s);
	while (ssize >= 0)
	{
		if (s[ssize] == d)
			return ((char *)s + ssize);
		ssize--;
	}
	return (NULL);
}