/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcourche <zcourche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 17:59:38 by zcourche          #+#    #+#             */
/*   Updated: 2023/11/06 19:28:16 by zcourche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (dst[i])
		i++;
	if (dstsize < i)
	{
		while (src[j])
			j++;
		return (dstsize + j);
	}
	while (dstsize > 0 && i < dstsize - 1 && src[j])
		dst[i++] = src[j++];
	dst[i] = '\0';
	while (src[j++])
		i++;
	return (i);
}
/*
#include "libft.h"
#include <stdio.h>
#include <strings.h>
int main(void)
{
    char dest[50] = "a";
	char dest1[50] = "a";
	char dest2[50] = "a";
ft_strlcat(dest, "lorem", 15);
ft_strlcat(dest1, "lorem ipsum", 15);
ft_strlcat(dest2, "lorem ipsum dolor sit amet", 15);
    char ddest[50] = "a";
	char ddest1[50] = "a";
	char ddest2[50] = "a";
strlcat(ddest, "lorem", 15);
strlcat(ddest1, "lorem ipsum", 15);
strlcat(ddest2, "lorem ipsum dolor sit amet", 15);
	printf("%s\n%s\n",dest, ddest);
	printf("%s\n%s\n",dest1, ddest1);
	printf("%s\n%s\n",dest2, ddest2);
    return 0;
}
*/