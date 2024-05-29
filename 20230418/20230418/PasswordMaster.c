/*
+----------------------------------------+
|             2023.04.18                 |
|           2037053 이제원               |
|       프로젝트  : 비밀번호 마스터      |
+----------------------------------------+
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void showQuestion(int level, int num1, int num2);
int getRandomNumber(int level);
void sucess_message(void);
void fail_message(void);

int main()
{
	int i, answer, num1, num2, result, check;
	int count = 0;//맞힌 갯수

	srand(time(NULL));//난수 초기화

	for(i=1; i<=5; i++)
	{
		num1 = getRandomNumber(i);//x
		num2 = getRandomNumber(i);//y
		
		//문제출력
		showQuestion(i, num1, num2);
		
		result = num1 * num2; // 정답

		check = scanf("%d", &answer);
		
		//입력값이 다른 타입일때
		while (check != 1)
		{
			printf("잘못된 값입니다. 다시 입력해주세요.\n\n");
			rewind(stdin);

			printf(">>");
			check = scanf("%d", &answer);
			
		}//end of while

		//문제 정답 확인
		if (answer == -1)
		{
			printf("프로그램을 종료합니다.\n");
			exit(0);
		}
		else if (answer == result)
		{
			sucess_message();
			count++;
		}
		else
		{
			fail_message();
		}//end of if

	}//end of for
	printf("비밀번호 %d개 맞혔습니다.\n", count);


	return 0;
}

void showQuestion(int level, int num1, int num2)
{
	printf("=============================================\n\n");
	printf("            비밀번호 마스터 게임입니다.\n\n");
	printf("=============================================\n\n");
	printf("                %d번째 비밀번호\n\n", level);
	printf("                   %d X %d = ? \n\n", num1, num2);
	printf("==============================================\n\n");
	printf("비밀번호를 입력하세요.(종료를 원하면 -1 입력)\n\n");
	printf(">>");  

}

int getRandomNumber(int level)
{
	int num;

	num = rand() % (level * 9) + 2; 
	
	return num;
}

void sucess_message(void)
{
	printf(">> Good! 정답입니다.\n\n");
}

void fail_message(void)
{
	printf(">> Wrong! 틀렸습니다.\n\n");
}
