/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcourche <zcourche@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 16:48:55 by zcourche          #+#    #+#             */
/*   Updated: 2023/09/17 15:50:12 by zcourche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	negative;

	if (n < 0)
	{
		negative = 'N';
	}
	else
	{
		negative = 'P';
	}
	write(1, &negative, 1);
}
