/*
		+---------------------------------------------------------------+
		|				    ���̹����Ƚ��� B�� C���					|
		|				         2037053 ������							|
		|						     5����								|
		|			          ������Ʈ : ���ڸ��߱�						|
		+---------------------------------------------------------------+

*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void)
{
	srand(time(NULL));//���� �ʱ�ȭ
	int num, answer, chance, check;
	
	num = rand() % 100 + 1;//1~100������ ����

	
	for (chance = 5; chance >= 0; chance--)
	{
		printf("������ȸ : %d�� \n", chance);
		
		//��ȸ�� �� ����ϸ� ����
		if (chance == 0)
		{
			printf("��� ��ȸ�� ����߽��ϴ�. \n");
			printf("�ƽ��Ե� �����߽��ϴ�.\n\n");
			printf("�������� �̿����ּ���\n");
			break;
		}//end of if

		printf("���ڸ� ���纸����(1~100) : ");
		check = scanf("%d", &answer);

		//�Է¹��� ���� ������ ��� 
		while (check != 1)
		{
			printf("�߸��� �Է��Դϴ�. ������ �ٽ��Է����ּ���\n\n");
			rewind(stdin);//�ٽ� �Է��� ������ �ִ� �ڵ�

			printf("������ȸ : %d�� \n", chance);
			printf("���ڸ� ���纸����(1~100) : ");

			check = scanf("%d", &answer);
		}//end of while

		//���� ���߱�
		if (num > answer)
		{
			printf("UP ��\n\n");
		}
		else if (num < answer)
		{
			printf("DOWN ��\n\n");
		}
		else if (num == answer)
		{
			printf("�����Դϴ�! �� ������ ����(%d)�� �������ϴ�.\n\n", answer);
			break;
		}
		else
		{
			printf("�˼����� ������ �߻��Ͽ����ϴ�.");
		}//end of if


	}//end of for

	return 0;
}
