int	c_bring_print(const char **format, va_list ap)
{
	ft_putchar_fd(va_arg(ap, int), 1);
	(*format)++;
	return (1);
}


int	s_bring_print(const char **format, va_list ap)
{
	char *str;

	str = va_arg(ap, char *);
	ft_putstr_fd(str, 1);
	(*format)++;
	return (ft_strlen(str));
}

void	ft_putnbr_16_print_fd(long long nbr, int fd)
{
	unsigned long	n;
	char			a;
	char			*base;

	base = "0123456789abcdef";
	if (nbr < 0)
	{
		write(1, "-", 1);
		n = nbr * (-1);
	}
	else
		n = nbr;
	if (n >= 16)
		ft_putnbr_16_print_fd(n / 16, fd);
	a = base[n % 16];
	ft_putchar_fd(a, fd);
}

int	p_bring_print(const char **format, va_list ap)
{
	long long	l;

	ft_putstr_fd("0x", 1);
	l = (long long)va_arg(ap, void *);
	ft_putnbr_16_print_fd(l, 1);
	(*format)++;
	//출력한거 갯수 어떻게 세지


int x
