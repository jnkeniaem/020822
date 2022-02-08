#include "libft.h"

int	c_bring_print(const char **format, va_list ap, int *cnt)
	//- cnt 자료형이 "int" * 이게 맞나 ? size_t나 다른 큰 자료형으로 안해도 되나?
{
	ft_putchar(va_arg(ap, int), cnt);
	(*format)++;
	return (*cnt);
}


int	s_bring_print(const char **format, va_list ap, int *cnt)
{
	ft_putstr(va_arg(ap, char *), cnt);
	(*format)++;
	return (*cnt);
}

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

int	p_bring_print(const char **format, va_list ap, int *cnt)
{
	long long	l;

	ft_putstr("0x", cnt);
	l = (long long)va_arg(ap, void *);
	ft_putnbr_16_print(l, cnt);
	(*format)++;
	//출력한거 갯수 어떻게 세지ㅇ
	//^ 출력할때마다 cnt 올려주는 방법으로!
	return (*cnt);
}

int x
