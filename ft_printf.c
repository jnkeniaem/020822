/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeekim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 17:44:04 by jeekim            #+#    #+#             */
/*   Updated: 2022/02/08 23:43:07 by jeanne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdarg.h>
#include "libft.h"

void	ft_putnbr_16_print(long long nbr, int *cnt)
{
	unsigned long	n;
	char			a;
	char			*base;

	base = "0123456789abcdef";
	if (nbr < 0)
	{
		ft_putchar('-', cnt);
		n = nbr * (-1);
	}
	else
		n = nbr;
	if (n >= 16)
		ft_putnbr_16_print(n / 16, cnt);
	a = base[n % 16];
	ft_putchar(a, cnt);
}
/*
#include <stdio.h>

int main()
{
	int cnt = 0;

	ft_putnbr_16_print(100, &cnt);
	printf("\n%d", cnt);
}
*/
/*
void	ft_putnbr_16_cap_print(long long nbr)
{
	unsigned long	n;
	char			a;
	char			*base;

	base = "0123456789ABCDEF";
	if (nbr < 0)
	{
		write(1, "-", 1);
		n = nbr * (-1);
	}
	else
		n = nbr;
	if (n >= 16)
		ft_putnbr_16_print(n / 16);
	a = base[n % 16];
	ft_putchar_cnt(a);
}

void	ft_putnbr(int n)
{
	if (n == -2147483648)
	{
		ft_putnbr(n / 10);
		ft_putchar_cnt('8');
	}
	else if (n < 0)
	{
		ft_putchar_cnt('-');
		ft_putnbr(-n);
	}
	else
	{
		if (n > 9)
			ft_putnbr(n / 10);
		ft_putchar_cnt(n % 10 + '0');
	}
}

void	ft_putunbr(unsigned int n)
{
	if (n > 9)
		ft_putunbr(n / 10);
	ft_putchar_cnt(n % 10 + '0');
}

int ft_printf(const char * format, ...)
{
	va_list ap;
	int		cnt;
	long long l;
	
	i = 0;
	va_start(ap, format);
	cnt = ft_strlen(format); // - 이거 좀 더 자세히 알아보자
	// 변환문자 없이 그냥 문자열이면 그 문자열 그대로 출력하니까 그 문자열의 길이를 반환하니까 이렇게 설정해준것같아.
	// 변환문자 있으면 밑에서 cnt값 조정.
	while (*format)
	{
		if (*format == '%')//'%' 발견하면
		{
			format++;//'%' 바로 다음꺼 가리켜
			cnt += printchar(&format, ap) - 2;
		}
		//cs%
		//pxXff
		//diuff
		//if (*format == 'c')
			ft_putchar_cnt(va_arg(ap, int));
		if (*format == 's')
			ft_putstr(va_arg(ap, char *));
		if (*format == 'p')
		{
			ft_putstr("0x");
			l = (long long)va_arg(ap, void *);//- long long으로 형 변환 해줘야되나 싶어?
			ft_putnbr_16_print(l);
		}
		if (*format == 'd' || format[i] == 'i')
			ft_putnbr(va_arg(ap, int));
		if (*format == 'u')
			ft_putunbr(va_arg(ap, unsigned int));
		if (*format == 'x')
			ft_putnbr_16_print(va_arg(ap, unsigned int));
		if (*format == 'X')
			ft_putnbr_16_cap_print(va_arg(ap, unsigned int));
		if (*format == '%')
			ft_putchar_cnt('%');
		format++;//
		else
		{
			ft_putchar_cnt(&(*format), 1);
			format++;
		}
	}
	va_end(ap);
	return (cnt);
}

int main()
{
	printf("%%\n", 333);
	ft_printf("%%\n", 333);
}*/
