/*
		+---------------------------------------------------------------+
		|				사이버보안스쿨 B반 C언어						|
		|				    2037053 이제원								|
		|						4주차									|
		|			프로젝트 : 학생의 나이 구하기 (switch문사용)		|
		+---------------------------------------------------------------+

*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int age,check;
	
	printf("청소년판단 프로그램입니다.\n");
	printf("프로그램을 종료하실려면 '0'을 입력하세요.\n");
	
	//입력받은 값이 정수일 경우 반복
	while (1)
	{
		printf("당신의 나이를 입력하세요.\n");
		check = scanf("%d", &age);

		//일력받은 값이 정수가 아닐 때
		while (check != 1)
		{
			printf("잘못된 입력입니다. 정수로 다시입력해주세요\n");
			//fflush(stdin);
			rewind(stdin);//다시 입력을 받을수 있는 코드

			check = scanf("%d", &age);
		}

		switch (age)
		{
		case 0 :
			printf("프로그램을 종료하겠습니다.\n\n");
			exit(0); //switch 뿐만 아니라 while문도 함께 빠져 나감

		//나이에 맞는 학생을 출력
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
			printf("당신의 나이는 %d살, 초등학생입니다.\n\n",age);
			break;

		case 14:
		case 15:
		case 16:
			printf("당신의 나이는 %d살, 중학생입니다.\n\n", age);
			break;

		case 17:
		case 18:
		case 19:
			printf("당신의 나이는 %d살, 고등학생입니다.\n\n", age);
			break;

		default:
			printf("당신의 나이는 %d살, 학생이 아닙니다.\n\n", age);
			break;

		}//end of switch
	}//end of while


	


	return 0;
}