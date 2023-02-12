/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zilucio- <zilucio-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 16:37:55 by zilucio-          #+#    #+#             */
/*   Updated: 2022/07/19 19:22:35 by zilucio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>
//#include<unistd.h>

int	ft_strlen(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
	{
		c++;
	}
	return (c);
}

/*int	main(void)
{
	char	str[];
	int		contar;

	str[] = "HOLA ZINDY ESTAS AVANZANDO";
	contar = ft_strlen(str);
	printf("%d\n", i);
	return (0);
}
*/
