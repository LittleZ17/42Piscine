/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zilucio- <zilucio-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 16:46:06 by zilucio-          #+#    #+#             */
/*   Updated: 2022/07/23 15:11:21 by zilucio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 'a' || str[i] > 'z') && (str[i] < 'A' || str[i] > 'Z'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/*int main()
{
    int test;

    test = ft_str_is_alpha("abc");
    printf("MIN: %d\n", test);

    test = ft_str_is_alpha("ABC");
    printf("MAY: %d\n", test);

    test = ft_str_is_alpha("abc123");
    printf("MIX: %d\n", test);

    test = ft_str_is_alpha("123");
    printf("NUM: %d\n", test);

    test = ft_str_is_alpha("");
    printf("VAC: %d\n", test);

    return 0;
}*/
