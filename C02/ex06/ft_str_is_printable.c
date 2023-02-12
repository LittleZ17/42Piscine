/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zilucio- <zilucio-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 15:19:15 by zilucio-          #+#    #+#             */
/*   Updated: 2022/07/23 15:55:47 by zilucio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

int	ft_str_is_printable(char *str)
{
	while (str[0] != '\0')
	{
		if (!(str[0] >= 32 && str[0] <= 126))
			return (0);
		str++;
	}
	return (1);
}

/*int main()
{
    int test;

    test = ft_str_is_printable("abc123");
    printf("NUMLET: %d\n", test);

    test = ft_str_is_printable("@#$%^&");
    printf("CARACT: %d\n", test);

	test = ft_str_is_printable("	");
    printf("TAB: %d\n", test);
	
	return (0);
}*/
