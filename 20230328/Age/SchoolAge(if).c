/*
		+---------------------------------------------------------------+
		|				사이버보안스쿨 B반 C언어						|		
		|				    2037053 이제원								|		
		|						4주차									|
		|			프로젝트 : 학생의 나이 구하기 (if문사용)			|
		+---------------------------------------------------------------+

*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int age,check;

	printf("청소년판단 프로그램입니다.\n");
	printf("프로그램을 종료하실려면 '0'을 입력하세요.\n");
	

	//if문만 사용하였을 때
	
	while (1)
	{
		printf("당신의 나이를 입력하세요.\n");
		check = scanf("%d", &age);

		while (check != 1)
		{
			//일력받은 값이 정수가 아닐 때
			printf("잘못된 입력입니다. 정수로 다시입력해주세요\n");
			//fflush(stdin);
			rewind(stdin);//다시 입력을 받을수 있는 코드

			check = scanf("%d", &age);
		}

		//입력받은 값이 0일때 종료
		if (age == 0)
		{
			printf("프로그램을 종료하겠습니다.\n");
			break;
		}

		//나이에 맞는 학생 출력하기
		if (age >= 8 && age <= 13)
		{
			printf("당신의 나이는 %d살, 초등학생입니다.\n\n",age);
		}

		if (age >= 14 && age <= 16)
		{
			printf("당신의 나이는 %d살, 중학생입니다.\n\n",age);
		}

		if (age >= 17 && age <= 19)
		{
			printf("당신의 나이는 %d살, 고등학생입니다.\n\n",age);
		}

		if (age <= 7 || age >= 20)
		{
			printf("당신의 나이는 %d살, 학생이 아닙니다.\n\n",age);
		}
	}//end of while
	

	//*****************************************
	//if - else if - else를 사용 하였을 때
	
	//while (1)
	//{
	//	printf("당신의 나이를 입력하세요.\n");
	//	check = scanf("%d", &age);

	//	while (check != 1)
	//	{
	//		//입력받은 값이 정수가 아닌 경우
	//		printf("잘못된 입력입니다. 정수로 다시입력해주세요\n");
	//		fflush(stdin);
	//		rewind(stdin);//다시 입력을 받을수 있는 코드

	//		check = scanf("%d", &age);
	//	}//while(정수아닌거) 종료

	//	//나이에 맞는 학생 출력하기
	//    if (age >= 8 && age <= 13)
	//	{
	//		printf("당신의 나이는 %d살, 초등학생입니다.\n\n", age);
	//	}

	//	else if (age >= 14 && age <= 16)
	//	{
	//		printf("당신의 나이는 %d살, 중학생입니다.\n\n", age);
	//	}

	//	else if (age >= 17 && age <= 19)
	//	{
	//		printf("당신의 나이는 %d살, 고등학생입니다.\n\n", age);
	//	}

	//	//입력받은 값이 0인경우 종료
	//	else if (age == 0)
	//	{
	//		printf("프로그램을 종료하겠습니다.\n\n");
	//		break;
	//	}

	//	else 
	//	{
	//		printf("당신의 나이는 %d살, 학생이 아닙니다.\n\n", age);
	//	}

	//}//end of while
	return 0;
}