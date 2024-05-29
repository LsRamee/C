/*
    +-----------------------------------------------+
	|             사이버보안스쿨 B반 C언어          |
	|                 2037053 이제원                |
	|                     6주차                     |
	|             프로젝트 : 4칙연산 계산기         |
	+-----------------------------------------------+
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void menu_disp();
void sum(int a, int b);
int sub(int a, int b);
void mul(int a, int b);
void div(int a, int b);

void main()
{
	int num1, num2, res, choice;

	while (1)
	{
		menu_disp();

		rewind(stdin);
		scanf("%d", &choice);

		switch (choice)
		{
			case 1:
				printf("더하고자 하는 정수 두개를 입력하세요 : ");
				scanf("%d %d", &num1, &num2);
				sum(num1, num2);
				break;

			case 2:
				printf("빼고자 하는 정수 두개를 입력하세요 : ");
				scanf("%d %d", &num1, &num2);
				res = sub(num1, num2);
				printf("%d - %d = %d입니다.\n\n", num1, num2, res);
				break;

			case 3:
				printf("곱하고자 하는 정수 두개를 입력하세요 : ");
				scanf("%d %d", &num1, &num2);
				mul(num1, num2);
				break;

			case 4:
				printf("나누고자 하는 정수 두개를 입력하세요 : ");
				scanf("%d %d", &num1, &num2);
				div(num1, num2);
				break;

			case 0:
				printf("프로그램을 종료합니다.\n");
				exit(0);

			default:
				printf("잘못된값입니다. 계산기에 적힌 값을 입력하세요\n");
				break;

		}//end of switch
	}//end of while
}

//디스플레이
void menu_disp()
{
	printf("+--- 사칙연산 계산기입니다. ---+\n");
	printf("|  원하는 연산을 입력하세요    |\n");
	printf("|  1 : 덧셈                    |\n");
	printf("|  2 : 뺄셈                    |\n");
	printf("|  3 : 곱셈                    |\n");
	printf("|  4 : 나눗셈                  |\n");
	printf("|  0 : 종료                    |\n");
	printf("+------------------------------+\n");
}

//더하기
void sum(int a, int b)
{	
	int res;
	res = a + b;
	
	printf("%d + %d = %d 입니다. \n\n", a, b, res);
}

//빼기
int sub(int a, int b)
{
	int res;

	res = a - b;

	return res;
}

//곱하기
void mul(int a, int b)
{
	int res;

	res = a * b;
	
	printf("%d * %d = %d입니다.\n\n", a, b, res);
}

//나누기
void div(int a, int b)
{
	double res;

	res = (double)a / (double)b;

	if (b == 0)
	{
		printf("[오류]0으로 나눌 수 없습니다. 다른 값을 입력하세요.\n\n");
	}
	else
	{
		printf("%d / %d = %.2lf 입니다.\n\n", a, b, res);
	}
}