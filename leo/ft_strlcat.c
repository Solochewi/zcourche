/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcouturi <lcouturi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 12:34:09 by lcouturi          #+#    #+#             */
/*   Updated: 2023/10/27 13:43:20 by lcouturi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_size	ft_strlcat(char *dst, const char *src, t_size dstsize)
{
	t_size	i[2];
	t_size	dest_size;

	i[0] = ft_strlen(dst);
	i[1] = 0;
	dest_size = i[0];
	if (dstsize < dest_size || !dst || !src)
		return (dstsize + ft_strlen(src));
	while (src[i[1]] && i[0] < dstsize)
	{
		dst[i[0]] = src[i[1]];
		i[0]++;
		i[1]++;
	}
	if (dest_size == dstsize)
		dst[dest_size] = '\0';
	else if (i[0] < dstsize)
		dst[i[0]++] = '\0';
	else if (i[0] >= dstsize)
		dst[dstsize - 1] = '\0';
	return (dest_size + ft_strlen(src));
}
