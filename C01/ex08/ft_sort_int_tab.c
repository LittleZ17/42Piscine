/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zilucio- <zilucio-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 15:02:08 by zilucio-          #+#    #+#             */
/*   Updated: 2022/07/19 19:39:07 by zilucio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>
#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	v_tmp;
	int	ub_i;
	int	ub_j;

	ub_i = 0;
	while (ub_i < size - 1)
	{
		ub_j = ub_i;
		while (ub_j < size)
		{
			if (tab[ub_i] > tab[ub_j])
			{
				v_tmp = tab[ub_i];
				tab[ub_i] = tab[ub_j];
				tab[ub_j] = v_tmp;
			}
			ub_j++;
		}
		ub_i++;
	}	
}

/*int main(void)
{
	int	tab[5] = {3,8,5,1,6};
	int i;
	int size;
	i = 0;
	size = 5;
	printf("Antes de funcion:\n");
	while (i < size)
	{
		ft_putchar(tab[i] + '0');
		i++;
	}

	printf("\nDespues dee funcion:\n");
	i = 0;
	ft_sort_int_tab(tab, size);
		while (i < size)
	{
		ft_putchar(tab[i] + '0');
		i++;
	}
	return (0);
}*/
