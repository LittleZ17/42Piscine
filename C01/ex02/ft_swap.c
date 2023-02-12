/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zilucio- <zilucio-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 17:02:34 by zilucio-          #+#    #+#             */
/*   Updated: 2022/07/17 12:30:56 by zilucio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

/*int	main(void)
{
	int	a;
	int	b;

	a = 20;
	b = 25;
	printf("Antes Cambio: \n num1: %d, num2: %d,\n", a, b);
	ft_swap(&a, &b);
	printf("Post Cambio: \n num1: %d, num2:%d, \n", a, b);
	return (0);
}
*/
