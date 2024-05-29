/*
		+---------------------------------------------------------------+
		|				    사이버보안스쿨 B반 C언어					|
		|				         2037053 이제원							|
		|						     5주차								|
		|			          프로젝트 : 숫자맞추기						|
		+---------------------------------------------------------------+

*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void)
{
	srand(time(NULL));//난수 초기화
	int num, answer, chance, check;
	
	num = rand() % 100 + 1;//1~100사이의 숫자

	
	for (chance = 5; chance >= 0; chance--)
	{
		printf("남은기회 : %d번 \n", chance);
		
		//기회를 다 사용하면 종료
		if (chance == 0)
		{
			printf("모든 기회를 사용했습니다. \n");
			printf("아쉽게도 실패했습니다.\n\n");
			printf("다음에도 이용해주세요\n");
			break;
		}//end of if

		printf("숫자를 맞춰보세요(1~100) : ");
		check = scanf("%d", &answer);

		//입력받은 값이 정수일 경우 
		while (check != 1)
		{
			printf("잘못된 입력입니다. 정수로 다시입력해주세요\n\n");
			rewind(stdin);//다시 입력을 받을수 있는 코드

			printf("남은기회 : %d번 \n", chance);
			printf("숫자를 맞춰보세요(1~100) : ");

			check = scanf("%d", &answer);
		}//end of while

		//숫자 맞추기
		if (num > answer)
		{
			printf("UP ↑\n\n");
		}
		else if (num < answer)
		{
			printf("DOWN ↓\n\n");
		}
		else if (num == answer)
		{
			printf("정답입니다! 제 맘속의 숫자(%d)를 맞혔습니다.\n\n", answer);
			break;
		}
		else
		{
			printf("알수없는 오류가 발생하였습니다.");
		}//end of if


	}//end of for

	return 0;
}
