/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcouturi <lcouturi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 12:34:09 by lcouturi          #+#    #+#             */
/*   Updated: 2023/10/27 13:43:24 by lcouturi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	int	i2;

	c %= 256;
	i = 0;
	i2 = -1;
	while (s && s[i])
	{
		if (s[i] == c)
			i2 = i;
		i++;
	}
	if (s && s[i] == c)
		i2 = i;
	if (s && i2 >= 0)
		return ((char *)&s[i2]);
	return (0);
}