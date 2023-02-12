/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zilucio- <zilucio-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 16:26:42 by zilucio-          #+#    #+#             */
/*   Updated: 2022/07/23 16:37:13 by zilucio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>
char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{	
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}	
		i++;
	}	
	return (str);
}
/*int	main()
{
	char str[] = "HOLA BARCELONA!";
	printf("Inicial:%s\n", str);
	printf("Post:%s\n", ft_strlowcase(str));
return (0);
}*/
