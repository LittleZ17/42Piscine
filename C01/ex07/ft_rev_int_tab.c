/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zilucio- <zilucio-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 10:29:38 by zilucio-          #+#    #+#             */
/*   Updated: 2022/07/19 20:03:43 by zilucio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
//#include<stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	v_tpm;
	int	i;

	i = 0;
	while (i < size)
	{
		v_tpm = tab[(size - 1)];
		tab[(size - 1)] = tab[i];
		tab[i] = v_tpm;
		i++;
		size--;
	}
}

/*int main(void)
{
	int tab[5] = {1,2,3,4,5};
	int i;
	int size;
	i = 0;
	size = 5;

	while (i < size)
	{
		ft_putchar(tab[i] + '0');
		i++;
	}
	ft_putchar('\n');
	i = 0;
	ft_rev_int_tab(tab, size);
		while (i < size)
	{
		ft_putchar(tab[i] + '0');
		i++;
	}
	return (0);
}
*/
