/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atahlawi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 09:20:36 by atahlawi          #+#    #+#             */
/*   Updated: 2026/10/05 07:53:53 by atahlawi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"	

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	if (dest == 0 && src == 0)
		return (0);
	if (dest < src)
	{
		i = 0;
		while (i < n)
		{
			((unsigned char *)dest)[i] = ((const unsigned char *)src)[i];
			i++;
		}
	}
	else
	{
		i = n;
		while (i > 0)
		{
			i--;
			((unsigned char *)dest)[i] = ((const unsigned char *)src)[i];
		}
	}
	return (dest);
}
