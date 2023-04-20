/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbenjami <rbenjami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 16:00:46 by rbenjami          #+#    #+#             */
/*   Updated: 2023/04/20 16:04:27 by rbenjami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
void  ft_lstiter(t_list *lst, void(*f)(void *))
{
  while(lst->next != NULL)
  {
    f(lst->content);
    lst = lst->next;
  }
}