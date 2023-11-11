/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcourche <zcourche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 17:36:26 by zcourche          #+#    #+#             */
/*   Updated: 2023/11/06 19:15:03 by zcourche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	const char	*s1;
	const char	*s2;
	size_t		i;

	s1 = str1;
	s2 = str2;
	i = 0;
	if (!str1 || !str2 || !n)
		return (0);
	while (i < n)
	{
		if (s1[i] != s2[i])
		{
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		}
		i++;
	}
	return (0);
}
