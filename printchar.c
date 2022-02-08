int	printchar(const char **format, va_list ap) // **format = format의(문자열) 포인터
//- 왜 ap를 매개변수에 넣은거지?
//- 왜 굳이 이중포인터를 한거지?
//- 출력되는 문자 갯수 반환.
//- const 필요없으면 지우자
{
	int		i;

	while (**format)//고정 인수이면
	{
		if (**format == 'c')//- 꼭 char로 형변환 해야하나?
		{
			i = va_arg(ap, int); // 가변인자 포인터에서 특정 자료형 크기만큼 값을 가져옴.
			//여기서는 int의 크기를 가져옴.
			write(1, &i, 1);
			(*format)++;
			return (1); // return(1)은 c 의 1바이트를 의미한다.
			// 왜 return 1을 해주는거지??
		}
		//요약하자면 화면에 출력하고 고정변수 문자열의 현재 문자 다음 문자를 가리키고 문자는 1바이트 크기니까 1 반환.
		//다른 변환문자들도 이런 과정, 마찬가지겠지?
		else if (**format == 's')
			return (print_s(format, ap));
		else if (**format == 'x' || **format == 'X' || **format == 'p')
			return (print_num(format, ap));
		else if (**format == 'd' || **format == 'i')
			return (print_di(format, ap));
		else if (**format == 'u')
			return (print_u(format, ap));
		else
			return (printpercent(format));
	}
	//%다음에 바로 변환문자올거라 가정하고 짰네 %5d이런경우 없네
	return (0);
}
