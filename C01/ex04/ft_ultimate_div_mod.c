/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zilucio- <zilucio-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 13:17:05 by zilucio-          #+#    #+#             */
/*   Updated: 2022/07/17 13:24:40 by zilucio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}	

/*int main(void)
{
	int a;
	int b;
	int *ptr1;
	int *ptr2;

	a = 350;
	b = 7;
	ptr1 = &a;
	ptr2 = &b;
	printf("Numeros a operar:\na=%d b=%d\n", a, b);
	ft_ultimate_div_mod(ptr1, ptr2);
	printf("Resultado Div= %d\n", a);
	printf("Resultado Mod= %d\n", b);
}
*/
