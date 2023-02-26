/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macelik <macelik@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 14:18:00 by macelik           #+#    #+#             */
/*   Updated: 2023/02/22 14:18:03 by macelik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	lensrc;
	size_t	i;
	size_t	j;

	lensrc = ft_strlen(src);
	i = 0;
	if (dstsize == 0)
		return (lensrc);
	while (dst[i] && dstsize)
	{
		dstsize--;
		i++;
	}
	j = 0;
	while (src[j] && dstsize > 1)
	{
		dst[i + j] = src[j];
		j++;
		dstsize--;
	}
	if (dstsize != 0)
		dst[i + j] = '\0';
	return (lensrc + i);
}
