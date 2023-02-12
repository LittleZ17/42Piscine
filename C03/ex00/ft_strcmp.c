/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zilucio- <zilucio-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 18:37:01 by zilucio-          #+#    #+#             */
/*   Updated: 2022/07/25 22:07:12 by zilucio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<string.h>
//#include<stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] > s2[i])
			return (1);
		if (s1[i] < s2[i])
			return (-1);
		i++;
	}
	return (0);
}

/*int main(void)
{
  char s1[] = "Hola";
  char s2[] = "HolaBcn!";

  int i = ft_strcmp(s1, s2);
  printf("%d\n", i);
}*/
