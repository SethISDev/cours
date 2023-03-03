/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaul <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 21:20:56 by lpaul             #+#    #+#             */
/*   Updated: 2023/03/03 13:19:19 by lpaul            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> 

void	ft_print_comb(void)
{
	char c[3] = {'0', '1', '2'};

	while (c[0] <= '7')
	{
		if (c[0] < c [1] && c[1] < c[2])
		{
			write(1, &c, 3);
			if (c[0] != '7' || c[1] != '8' || c[2] != '9')
			{
				write(1, ", ", 2);
			}
		}

		if (++c[2] > '9')
		{
			c[2] = '0';
			if (++c[1] > '8')
			{
				c[1] = '0';
				++c[0];
			}
		}
	}
}
















