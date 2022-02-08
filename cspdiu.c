//변환문자에따라
//가변인자 포인터가 가리키는 곳에서 특정 자료형 크기만큼 값 가져오고
//그걸 화면에 출력하고
//고정인수의 다음 문자 가리켜주고
//출력한 문자 갯수 반환하는
//함수
//

int	printchar(const char **format, va_list ap)
{
	if (**format)
	{
		if (**format == 'c')
			return (c_bring_print(format, ap));
		else if (**format == 's')
			return (s_bring_print(format, ap));
		else if 

	else // 예) 고정인수가 "%" 인 경우
		return (2);
