/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 11:28:11 by user42            #+#    #+#             */
/*   Updated: 2020/11/16 12:23:39 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	dst_len;
	size_t	source_len;
	char	*source;

	source = (char *)src;
	dst_len = ft_strlen(dst);
	source_len = ft_strlen(source);
	i = 0;
	if (dstsize <= dst_len)
		return (source_len + dstsize);
	while (source[i] && dst_len + i < dstsize - 1)
	{
		dst[dst_len + i] = source[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	return (dst_len + source_len);
}
