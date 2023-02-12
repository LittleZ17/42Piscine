/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zilucio- <zilucio-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 17:22:52 by zilucio-          #+#    #+#             */
/*   Updated: 2022/07/28 18:47:04 by zilucio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>
#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		nb = nb * -1;
	}
	if (nb == -2147483648)
	{
		write(1, "2147483648", 10);
		return ;
	}
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		nb = nb % 10;
	}
	ft_putchar (nb + '0');
}
/*
int	main (void)
{
	int	nb = 123456;
	ft_putnbr(nb);
	return (0);	
}*/
