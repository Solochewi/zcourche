/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcourche <zcourche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 14:10:40 by zcourche          #+#    #+#             */
/*   Updated: 2023/11/01 12:27:47 by zcourche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memset(void *str, int c, size_t len)
{
	unsigned char	*s;
	size_t			i;

	s = str;
	i = 0;
	while (i < len)
	{
		*s = (unsigned char)c;
		i++;
		s++;
	}
	return (str);
}
