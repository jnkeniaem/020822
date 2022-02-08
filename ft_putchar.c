/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeekim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 18:16:01 by jeekim            #+#    #+#             */
/*   Updated: 2022/02/08 16:33:31 by jeekim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar(char c, int *cnt)
{
	write(1, &c, 1);
	cnt++;
}

#include <stdio.h>

int main()
{
	char *str = "Hello";
	int	cnt = 0;

	while (*str)
	{
		ft_putchar(*str, &cnt);
		str++;
	}
	printf("\n%d", cnt);
}
