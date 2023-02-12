/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zilucio- <zilucio-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 13:30:27 by zilucio-          #+#    #+#             */
/*   Updated: 2022/07/20 18:02:44 by zilucio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>
#include<unistd.h>

void	ft_putstr(char *str);

/*int	main(void)
{
	char	str[5] = "HOLA";
	char	*ptr;

	ptr = str;
	ft_putstr(ptr);
	return (0);
}*/

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		ft_putchar(*str);
		str++;
	}
}
