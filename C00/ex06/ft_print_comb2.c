/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zilucio- <zilucio-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 19:58:07 by zilucio-          #+#    #+#             */
/*   Updated: 2022/07/14 23:50:46 by zilucio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	nbr1;
	int	nbr2;

	nbr1 = 0;
	nbr2 = 0;
	while (nbr1 < 100)
	{
		nbr2 = nbr1 + 1;
		while (nbr2 < 100)
		{
			ft_putchar(nbr1 / 10 + '0');
			ft_putchar(nbr1 % 10 + '0');
			ft_putchar(' ');
			ft_putchar(nbr2 / 10 + '0');
			ft_putchar(nbr2 % 10 + '0');
			if ((nbr1 / 10 != 9) || (nbr1 % 10 != 8))
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			nbr2++;
		}
		nbr1++;
	}
}
