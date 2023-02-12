/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zilucio- <zilucio-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 21:17:13 by zilucio-          #+#    #+#             */
/*   Updated: 2022/07/24 18:22:27 by zilucio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

int	ft_str_is_lowercase(char *str)
{
	while (str[0] != '\0')
	{
		if (!(str[0] >= 'a' && str[0] <= 'z'))
			return (0);
		str++;
	}
	return (1);
}

/*int main()
{
    int test;

    test = ft_str_is_lowercase("abc");
    printf("MIN: %d\n", test);

    test = ft_str_is_lowercase("ABC");
    printf("MAY: %d\n", test);

    test = ft_str_is_lowercase("abc123");
    printf("MIX: %d\n", test);

    test = ft_str_is_lowercase("123");
    printf("NUM: %d\n", test);

    test = ft_str_is_lowercase("");
    printf("VAC: %d\n", test);

    return 0;
}*/
