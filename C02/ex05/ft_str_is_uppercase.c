/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zilucio- <zilucio-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 21:18:19 by zilucio-          #+#    #+#             */
/*   Updated: 2022/07/23 15:17:26 by zilucio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

int	ft_str_is_uppercase(char *str)
{
	while (str[0] != '\0')
	{
		if (!(str[0] >= 'A' && str[0] <= 'Z'))
			return (0);
		str++;
	}
	return (1);
}

/*int main()
{
    int test;

    test = ft_str_is_uppercase("abc");
    printf("MIN: %d\n", test);

    test = ft_str_is_uppercase("ABC");
    printf("MAY: %d\n", test);

    test = ft_str_is_uppercase("abc123");
    printf("MIX: %d\n", test);

    test = ft_str_is_uppercase("123");
    printf("NUM: %d\n", test);

    test = ft_str_is_uppercase("");
    printf("VAC: %d\n", test);
    
    return 0;
}*/
