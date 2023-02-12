/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zilucio- <zilucio-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 01:07:56 by zilucio-          #+#    #+#             */
/*   Updated: 2022/07/27 02:01:49 by zilucio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (dest[i] != '\0')
			i++;
	j = 0;
	while (src[j] && j < size)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (i);
}

int	main(void)
{
	char src[] = "12345";
	char dest[] = "ABCDE";

	printf("ArraySRC: %s\n", src);
	printf("ArrayDEST: %s\n", dest);
	ft_strlcat(dest, src, 10);
	printf("Despues de Funcion: %s\n", dest);
}
