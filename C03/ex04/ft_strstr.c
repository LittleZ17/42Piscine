/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zilucio- <zilucio-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 20:39:17 by zilucio-          #+#    #+#             */
/*   Updated: 2022/07/27 01:07:21 by zilucio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>
//#include<string.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	cad;
	int	subc;

	cad = 0;
	subc = 0;
	if (to_find[subc] == '\0')
		return (str);
	while (str[cad] != '\0')
	{
		while (to_find[subc] == str [cad + subc])
		{
			subc++;
			if (to_find[subc] == '\0')
				return (str + cad);
		}
		cad++;
	}
	return (0);
}

/*int main ()
{
	char str[] = "ABCD 1234 EFGH";
	char to_find[] = "D";

	printf("Mi funcion strstr:%s\n", ft_strstr(str, to_find));
	printf("Funcion original:%s\n", strstr(str, to_find));
}*/
