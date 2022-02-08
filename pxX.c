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

int	x_bring_print(const char **format, va_list ap, int *cnt)
// -"x"일때도 long long으로 해줘도 되나? 너무 낭비 아닌가?
{
	ft_putnbr_16_print(va_arg(ap, unsigned int), cnt);
	(*format)++;
	return (*cnt);
}

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

int	X_bring_print(const char **format, va_list ap, int *cnt)
{
	ft_putnbr_16_print(va_arg(ap, unsigned int), cnt);
	(*format)++;
	return (*cnt);
}
