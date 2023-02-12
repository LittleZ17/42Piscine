/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zilucio- <zilucio-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 13:32:03 by zilucio-          #+#    #+#             */
/*   Updated: 2022/07/22 13:35:06 by zilucio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string.h>
//#include<stdio.h>
#include<unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

/*int	main(void)
{
	char src[] = "ABCDEFG";
	char dest[15] = "              ";

	printf("ArraySRC: %s\n", src);
	printf("ArrayDEST: %s\n", dest);
	strncpy(dest, src, 3);
	printf("Despues de Funcion: %s\n", dest);
}*/
