/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeekim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 18:17:59 by jeekim            #+#    #+#             */
/*   Updated: 2022/02/08 20:26:45 by jeanne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr(char *s, int *cnt)
{
	if (!s)
		return ;
	while (*s)
	{
		ft_putchar(*s, cnt);
		s++;
	}
}
