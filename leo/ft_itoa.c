/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcourche <zcourche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 12:34:09 by lcouturi          #+#    #+#             */
/*   Updated: 2023/11/09 11:22:20 by zcourche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	getsize(long n)
{
	int	s;

	s = 1;
	if (!n)
		s++;
	if (n < 0)
	{
		n *= -1;
		s++;
	}
	while (n)
	{
		n /= 10;
		s++;
	}
	return (s);
}

char	*ft_itoa(int n)
{
	char		*returned;
	int			i[2];
	long int	n2;

	i[0] = 0;
	i[1] = 1000000000;
	n2 = n;
	returned = malloc(getsize(n) * sizeof(char));
	if (!returned)
		return (returned);
	if (n2 < 0)
	{
		returned[i[0]++] = '-';
		n2 *= -1;
	}
	while (i[1])
	{
		if (n2 / i[1])
			returned[i[0]++] = n2 / i[1] % 10 + '0';
		i[1] /= 10;
	}
	if (!n)
		returned[i[0]++] = '0';
	returned[i[0]++] = '\0';
	return (returned);
}
