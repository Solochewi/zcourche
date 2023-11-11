/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcourche <zcourche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 07:17:27 by zcourche          #+#    #+#             */
/*   Updated: 2023/11/08 07:56:56 by zcourche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	len;
	void	*ptr;

	len = count * size;
	ptr = malloc(len);
	if (ptr == NULL)
		return (0);
	ft_bzero(ptr, len);
	return ((void *)ptr);
}
