/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macelik <macelik@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 12:28:03 by macelik           #+#    #+#             */
/*   Updated: 2023/02/15 12:44:40 by macelik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*d;
	char	*s;

	i = 0;
	d = ((char *)dst);
	s = ((char *)src);
	if (!dst && !src)
		return (0);
	if (d > s)
	{
		while (len > 0)
		{
			d[len -1] = s[len - 1];
				len--;
		}
	}
	while (len--)
	{
		d[i] = s[i];
		i++;
	}
	return ((void *)dst);
}
