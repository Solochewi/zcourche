/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcouturi <lcouturi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 12:34:09 by lcouturi          #+#    #+#             */
/*   Updated: 2023/10/27 13:43:06 by lcouturi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, t_size n)
{
	t_size	i;
	char	*s3;
	char	*s4;

	i = 0;
	s3 = (char *)s1;
	s4 = (char *)s2;
	if (!s1 || !s2 || !n)
		return (0);
	while (s3[i] == s4[i])
	{
		n--;
		if (!n)
			return (0);
		i++;
	}
	return ((unsigned char)s3[i] - (unsigned char)s4[i]);
}
