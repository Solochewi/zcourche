/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcourche <zcourche@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 22:59:37 by zcourche          #+#    #+#             */
/*   Updated: 2023/10/03 01:40:19 by zcourche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = '0';
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_putchar('0' + (a / 10));
			ft_putchar('0' + (a % 10));
			write (1, " ", 1);
			ft_putchar('0' + (b / 10));
			ft_putchar('0' +(b % 10));
			if (a != 98 || b != 99)
				write(1, ", ", 2);
			b++;
		}
		a++;
	}
}
/*
int	main(void)
{
	ft_print_comb2();
}*/
