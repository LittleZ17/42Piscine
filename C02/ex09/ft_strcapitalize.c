/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zilucio- <zilucio-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 17:27:50 by zilucio-          #+#    #+#             */
/*   Updated: 2022/07/27 00:53:05 by zilucio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	a;

	if (str[0] >= 'a' && str[0] <= 'z')
	{
		str[0] -= 32;
	}
	a = 1;
	while (str[a] != '\0')
	{
		if (str[a] >= 'A' && str[a] <= 'Z')
			str[a] += 32;
		if (str[a] >= 'a' && str[a] <= 'z')
		{
			if (!(str[a - 1] >= 'a' && str[a -1] <= 'z'))
			{
				if (!(str[a - 1] >= '0' && str[a -1] <= '9'))
				{
					if (!(str[a - 1] >= 'A' && str[a - 1] <= 'Z'))
						str[a] -= 32;
				}
			}
		}
		a++;
	}
	return (str);
}

/*int	main ()
{
	char str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
		printf("Inicial:\n%s\n", str);
		printf("Post:\n%s\n", ft_strcapitalize(str));
		return(0);
}*/
