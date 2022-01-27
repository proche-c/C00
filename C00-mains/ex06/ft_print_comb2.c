/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: proche-c <proche-c@student.42barcelona.com>+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 10:57:28 by proche-c          #+#    #+#             */
/*   Updated: 2021/11/03 12:51:03 by proche-c         ###   ########.bcn      */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write(char a, char b, char c, char d)
{
	if (a < c || (a == c && d > b))
	{
		write(1, &a, 1);
		write(1, &b, 1);
		write(1, " ", 1);
		write(1, &c, 1);
		write(1, &d, 1);
		if (!(a == '9' && b == '8' && c == '9' && d == '9'))
			write(1, ", ", 2);
	}
}

void	ft_print_comb2(void)
{
	char	a[2];
	char	b[2];

	a[0] = '0';
	while (a[0] <= '9')
	{
		a[1] = '0';
		while (a[1] <= '9')
		{
			b[0] = '0';
			while (b[0] <= '9')
			{
				b[1] = '0';
				while (b[1] <= '9')
				{
					ft_write(a[0], a[1], b[0], b[1]);
					b[1]++;
				}
				b[0]++;
			}
			a[1]++;
		}
		a[0]++;
	}
}
