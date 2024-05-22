/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putbin.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 12:01:49 by htrindad          #+#    #+#             */
/*   Updated: 2024/05/22 14:31:28 by htrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_binlen(int bin)
{
	int	i;

	i = 0;
	while (bin)
	{
		i++;
		bin /= 2;
	}
	return (i);
}

void	ft_putbin_rec(int bin)
{
	if (bin > 1)
		ft_putbin_rec(bin / 2);
	ft_putchar_fd((bin % 2) + '0', 1);
}

int	ft_putbin(int bin)
{
	const int	len = ft_binlen(bin);

	if (!bin)
		return (ft_putchar_fd('0', 1));
	ft_putbin_rec(bin);
	return (len);
}
