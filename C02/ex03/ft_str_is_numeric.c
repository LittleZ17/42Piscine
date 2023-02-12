/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zilucio- <zilucio-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 20:34:40 by zilucio-          #+#    #+#             */
/*   Updated: 2022/07/24 18:24:07 by zilucio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
			i++;
		else
			return (0);
	}
	return (1);
}

/*int main()
{
    int test;

    test = ft_str_is_numeric("abc");
    printf("MIN: %d\n", test);

    test = ft_str_is_numeric("ABC");
    printf("MAY: %d\n", test);

    test = ft_str_is_numeric("abc123");
    printf("MIX: %d\n", test);

    test = ft_str_is_numeric("123");
    printf("NUM: %d\n", test);

    test = ft_str_is_numeric("");
    printf("VAC: %d\n", test);

    return 0;
}*/
