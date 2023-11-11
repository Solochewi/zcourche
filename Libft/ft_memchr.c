/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcourche <zcourche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 17:16:16 by zcourche          #+#    #+#             */
/*   Updated: 2023/11/06 17:29:43 by zcourche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char	*s2 = s;
	char		c2;

	c2 = c;
	while (s && n--)
	{
		if (*s2 == c2)
			return ((void *)s2);
		s2++;
	}
	return (0);
}
