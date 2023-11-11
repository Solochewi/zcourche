/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcourche <zcourche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 18:33:43 by zcourche          #+#    #+#             */
/*   Updated: 2023/10/18 13:08:38 by zcourche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')
		|| (c >= '0' && c <= '9'))
	{
		return (1);
	}
	else
		return (0);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%d\n", ft_isalnum('/'));
		printf("%d\n", ft_isalnum(' '));
			printf("%d\n", ft_isalnum('A'));
				printf("%d\n", ft_isalnum('o'));
					printf("%d\n", ft_isalnum('1'));
						printf("%d\n", ft_isalnum('9'));
}*/