/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaul <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 14:47:10 by lpaul             #+#    #+#             */
/*   Updated: 2023/03/01 14:49:45 by lpaul            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(void)
{
	char c;
	c = 'b';
    	write(1, &c, 1);
}

int main(void)
{
	ft_putchar();
	return(0);
}
