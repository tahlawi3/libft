/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atahlawi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 09:19:42 by atahlawi          #+#    #+#             */
/*   Updated: 2026/09/28 10:18:46 by atahlawi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_l;
	t_list	*new_n;
	void	*c;

	if (lst == 0 || f == 0 || del == 0)
		return (0);
	new_l = 0;
	while (lst)
	{
		c = f(lst->content);
		new_n = ft_lstnew(c);
		if (new_n == 0)
		{
			del(c);
			ft_lstclear(&new_l, del);
			return (0);
		}
		ft_lstadd_back(&new_l, new_n);
		lst = lst->next;
	}
	return (new_l);
}
