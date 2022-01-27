/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: proche-c <proche-c@student.42barcelona.com>+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 10:57:28 by proche-c          #+#    #+#             */
/*   Updated: 2021/11/04 10:38:30 by proche-c         ###   ########.bcn      */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_print_combn(int nb)
{
	char a[nb];
	int i;

	a[0] = '0';
	i = 1;
	while (i < nb)
	{
		while (a[nb-1] <=9)
		{
			ft_print_combn(nb - 1);
			if (a[nb] > a[nb - 1])
			{
				write(1, a, nb);
			}
			nb = nb +1;
		}
		i++;
	}
}
