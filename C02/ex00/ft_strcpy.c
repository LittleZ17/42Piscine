/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zilucio- <zilucio-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 20:10:04 by zilucio-          #+#    #+#             */
/*   Updated: 2022/07/22 14:02:51 by zilucio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
//#include<stdio.h>
#include<string.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		++i;
	}
	dest[i] = '\0';
	return (dest);
}

/*int	main(void)
{
	char uno[5];
	char dos[5];

	printf("Escribe P1:");
	scanf("%s", uno);
	printf("Escribe P2:");
	scanf("%s", dos);
	
	ft_strcpy(dos, uno);

	printf("P1:%s\n", uno);
	printf("P2:%s\n", dos);
	return (0);
}*/
