/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putbin.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 12:01:49 by htrindad          #+#    #+#             */
/*   Updated: 2024/05/22 12:18:47 by htrindad         ###   ########.fr       */
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

static int	ft_ol(bin)
{
	return (ft_putchar_fd(bin + '0', 1));
}

int	ft_putbin(int bin)
{
	const int	len = ft_binlen(bin);

	if (len < 2)
		return (ft_ol(bin));
	else
	{
		while (bin)
		{
			ft_putchar_fd((bin % 2) + '0', 1)
			bin /= 2;
		}
	}
	return (len);
}
