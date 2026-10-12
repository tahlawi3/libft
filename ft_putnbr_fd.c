/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atahlawi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 09:22:13 by atahlawi          #+#    #+#             */
/*   Updated: 2026/10/05 07:37:07 by atahlawi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	*str;

	if (fd < 0)
		return ;
	str = ft_itoa(n);
	if (str == 0)
		return ;
	write(fd, str, ft_strlen(str));
	free(str);
}
