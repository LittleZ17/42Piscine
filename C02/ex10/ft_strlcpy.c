/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zilucio- <zilucio-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 17:49:51 by zilucio-          #+#    #+#             */
/*   Updated: 2022/07/23 18:16:10 by zilucio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	r;

	i = 0;
	r = 0;
	while (src[r])
			r++;
	if (size < 1)
		return (r);
	while (src[i] && i < size -1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (r);
}

/*int	main(void)
{
	char src[] = "ABCDEFG";
	char dest[15] = "              ";

	printf("ArraySRC: %s\n", src);
	printf("ArrayDEST: %s\n", dest);
	ft_strlcpy(dest, src, 3);
	printf("Despues de Funcion: %s\n", dest);
}*/
