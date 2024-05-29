/*
+-----------------------------+
|         2023.05.09          |
|        학번 : 2037053       |
|           이제원            |
|         :프로젝트:          |
|       자라나라 머리카락     |
+-----------------------------+
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void title_display(void);//타이틀 출력
void ShowBottle(void);//선택 창
int CountBottle(void);//몇개의 병을 선택 할지
int ColorBottle(int check);//색 출력


int main()
{
	int treatment;  //정답
	int bottle[3];
	int CntBottle;  //물병 갯수
	int i;
	int answer;     //정답비교

	srand(time(NULL));
	treatment = rand() % 4 + 1;//진짜 발모제 선택

	title_display();
	ShowBottle();
	
	for (i = 1;i <= 3;i++)
	{
		printf("%d번째 테스트\n", i);

		CntBottle = CountBottle();

		switch (CntBottle)
		{
			case 2:
				printf("첫번째로 선택할 병번호를 선택하세요(1~4) : ");
				scanf("%d", &bottle[0]);
				printf("두번째로 선택할 병 번호를 선택하세요(1~4) :");
				scanf("%d", &bottle[1]);
				printf("%d %d번 병을 머리에 바릅니다.\n", bottle[0], bottle[1]);
				if (bottle[0] == treatment || bottle[1] == treatment)
				{
					printf(">>성공 머리카락이 났어요!\n\n");
				}
				else
				{
					printf(">>실패 머리카락이 자라나지 못했어요 ㅠㅠ\n\n");
				}
				break;

			case 3:
				printf("첫번째로 선택할 병번호를 선택하세요(1~4) : ");
				scanf("%d", &bottle[0]);
				printf("두번째로 선택할 병 번호를 선택하세요(1~4) :");
				scanf("%d", &bottle[1]);
				printf("세번째로 선택할 병 번호를 선택하세요(1~4) :");
				scanf("%d", &bottle[2]);
				if (bottle[0] == treatment || bottle[1] == treatment || bottle[2] == treatment)
				{
					printf(">>성공 머리카락이 났어요!\n\n");
				}
				else
				{
					printf(">>실패 머리카락이 자라나지 못했어요 ㅠㅠ\n\n");
				}
				break;

			default:
				printf("해당 병의 갯수로 조합이 불가능합니다. 프로그램을 종료합니다.\n");
				exit(0);
				break;
		}//end of switch
	}//end of for
	
	printf("발모제는 무슨병일까요?(1~4)\n");
	scanf("%d", &answer);

	if (answer == treatment)
	{
		ColorBottle(treatment);
		printf("정답입니다.\n");
	}
	else
	{
		printf("땡! 틀렸습니다. 정답은 ");
		ColorBottle(treatment);
		printf("입니다.\n");
	}//end of if

	return 0;
}

void title_display(void)
{
	printf("==== 자라나라 머리카락 게임 ====\n");
}

void ShowBottle(void)
{
	printf("1.빨간 물병\n");
	printf("2.하얀 물병\n");
	printf("3.파란 물병\n");
	printf("4.검은 물병\n");
	printf("================================\n");
}

int CountBottle(void)
{
	int count;

	printf("몇개의 병을 조합하겠습니까?(2~3)\n");
	scanf("%d", &count);

	return count;
}

int ColorBottle(int check)
{
	switch (check)
	{
		case 1:
			printf("[1.빨간 물병]");
			break;

		case 2:
			printf("[2.하얀 물병]");
			break;

		case 3:
			printf("[3.파란 물병]");
			break;

		case 4:
			printf("[4.검은 물병]");
			break;

		default:
			break;
	}
	
	return check;
}
