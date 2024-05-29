/*
+-----------------------------+
|         2023.05.09          |
|        �й� : 2037053       |
|           ������            |
|         :������Ʈ:          |
|       �ڶ󳪶� �Ӹ�ī��     |
+-----------------------------+
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void title_display(void);//Ÿ��Ʋ ���
void ShowBottle(void);//���� â
int CountBottle(void);//��� ���� ���� ����
int ColorBottle(int check);//�� ���


int main()
{
	int treatment;  //����
	int bottle[3];
	int CntBottle;  //���� ����
	int i;
	int answer;     //�����

	srand(time(NULL));
	treatment = rand() % 4 + 1;//��¥ �߸��� ����

	title_display();
	ShowBottle();
	
	for (i = 1;i <= 3;i++)
	{
		printf("%d��° �׽�Ʈ\n", i);

		CntBottle = CountBottle();

		switch (CntBottle)
		{
			case 2:
				printf("ù��°�� ������ ����ȣ�� �����ϼ���(1~4) : ");
				scanf("%d", &bottle[0]);
				printf("�ι�°�� ������ �� ��ȣ�� �����ϼ���(1~4) :");
				scanf("%d", &bottle[1]);
				printf("%d %d�� ���� �Ӹ��� �ٸ��ϴ�.\n", bottle[0], bottle[1]);
				if (bottle[0] == treatment || bottle[1] == treatment)
				{
					printf(">>���� �Ӹ�ī���� �����!\n\n");
				}
				else
				{
					printf(">>���� �Ӹ�ī���� �ڶ��� ���߾�� �Ф�\n\n");
				}
				break;

			case 3:
				printf("ù��°�� ������ ����ȣ�� �����ϼ���(1~4) : ");
				scanf("%d", &bottle[0]);
				printf("�ι�°�� ������ �� ��ȣ�� �����ϼ���(1~4) :");
				scanf("%d", &bottle[1]);
				printf("����°�� ������ �� ��ȣ�� �����ϼ���(1~4) :");
				scanf("%d", &bottle[2]);
				if (bottle[0] == treatment || bottle[1] == treatment || bottle[2] == treatment)
				{
					printf(">>���� �Ӹ�ī���� �����!\n\n");
				}
				else
				{
					printf(">>���� �Ӹ�ī���� �ڶ��� ���߾�� �Ф�\n\n");
				}
				break;

			default:
				printf("�ش� ���� ������ ������ �Ұ����մϴ�. ���α׷��� �����մϴ�.\n");
				exit(0);
				break;
		}//end of switch
	}//end of for
	
	printf("�߸����� �������ϱ��?(1~4)\n");
	scanf("%d", &answer);

	if (answer == treatment)
	{
		ColorBottle(treatment);
		printf("�����Դϴ�.\n");
	}
	else
	{
		printf("��! Ʋ�Ƚ��ϴ�. ������ ");
		ColorBottle(treatment);
		printf("�Դϴ�.\n");
	}//end of if

	return 0;
}

void title_display(void)
{
	printf("==== �ڶ󳪶� �Ӹ�ī�� ���� ====\n");
}

void ShowBottle(void)
{
	printf("1.���� ����\n");
	printf("2.�Ͼ� ����\n");
	printf("3.�Ķ� ����\n");
	printf("4.���� ����\n");
	printf("================================\n");
}

int CountBottle(void)
{
	int count;

	printf("��� ���� �����ϰڽ��ϱ�?(2~3)\n");
	scanf("%d", &count);

	return count;
}

int ColorBottle(int check)
{
	switch (check)
	{
		case 1:
			printf("[1.���� ����]");
			break;

		case 2:
			printf("[2.�Ͼ� ����]");
			break;

		case 3:
			printf("[3.�Ķ� ����]");
			break;

		case 4:
			printf("[4.���� ����]");
			break;

		default:
			break;
	}
	
	return check;
}
