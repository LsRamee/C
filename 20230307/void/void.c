#include <stdio.h>
/*
서식지정자
%d = 정수값
%.nf = 실수값,n은 소수점 아래의 자릿수, n+1자리에서 반올림
%.nlf = 실수값,n은 소수점 아래의 자릿수, n+1자리에서 반올림
%c = 문자
%s = 문자열
*/

int main(void) {
	
	int age = 20;
	printf("%d\n", age); 
	//%d는 정수값을 출력한다.
	
	float f = 2.56f;
	printf("%.1f\n", f); 
	//%.nf는 n에 원하는 자릿수를 적으면 된다.
	//n이 1인 경우 소수 첫째자리까지 나타내고 두번째 자릿수에서 반올림 한다.
	
	double d = 2.452;
	printf("%.2lf\n", d);
	//%.nlf는 n에 원하는 자릿수를 적으면 된다.
	//n이 2인 경우 소수 두째자리까지 나타내고 세번째 자릿수에서 반올림 한다.

	char c = 'A';
	printf("%c\n", c);
	//%c는 문자 단 한개만 인식이 된다.

	char str[256];
	scanf_s("%s", str, sizeof(str));
	printf("%s",str);

	return 0;
}



