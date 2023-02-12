/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zilucio- <zilucio-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 18:14:19 by zilucio-          #+#    #+#             */
/*   Updated: 2022/07/17 12:34:17 by zilucio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*int	main(void)
{
	int	a;
	int	b;
	int	div;
	int	mod;
	int	*ptr1;
	int	*ptr2;

	a = 24;
	b = 5;
	ptr1 = &div;
	ptr2 = &mod;
	printf("numeros a operar:\n a=%d\n b=%d\n", a, b);
	ft_div_mod(a, b, ptr1, ptr2);
	printf("Resultado Div= %d\n", div);
	printf("Resultado Mod= %d\n", mod);
	return (0);
}
*/
