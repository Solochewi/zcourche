/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcourche <zcourche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 20:40:34 by zcourche          #+#    #+#             */
/*   Updated: 2023/11/06 20:49:03 by zcourche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	c = c % 256;
	while ((*s != '\0') && (*s != c))
	{
		s++;
	}
	if (*s == c)
	{
		return ((char *)s);
	}
	return ((char *) NULL);
}
/*
#include <stdio.h>
#include <stdlib.h>
int	main()
{
	printf("%s\n", ft_strchr("atoi", 't' + 256));
	printf("%s\n", strchr("atoi", 't' + 256));
}
*/
