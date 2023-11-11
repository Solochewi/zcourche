/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcourche <zcourche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 10:51:16 by zcourche          #+#    #+#             */
/*   Updated: 2023/11/08 11:35:51 by zcourche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*r;

	r = malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (r)
	{
		ft_strlcpy(r, s1, ft_strlen(s1) + ft_strlen(s2) + 1);
		ft_strlcat(r, s2, ft_strlen(s1) + ft_strlen(s2) + 1);
	}
	return (r);
}
