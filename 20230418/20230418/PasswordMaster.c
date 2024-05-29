/*
+----------------------------------------+
|             2023.04.18                 |
|           2037053 ������               |
|       ������Ʈ  : ��й�ȣ ������      |
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
	int count = 0;//���� ����

	srand(time(NULL));//���� �ʱ�ȭ

	for(i=1; i<=5; i++)
	{
		num1 = getRandomNumber(i);//x
		num2 = getRandomNumber(i);//y
		
		//�������
		showQuestion(i, num1, num2);
		
		result = num1 * num2; // ����

		check = scanf("%d", &answer);
		
		//�Է°��� �ٸ� Ÿ���϶�
		while (check != 1)
		{
			printf("�߸��� ���Դϴ�. �ٽ� �Է����ּ���.\n\n");
			rewind(stdin);

			printf(">>");
			check = scanf("%d", &answer);
			
		}//end of while

		//���� ���� Ȯ��
		if (answer == -1)
		{
			printf("���α׷��� �����մϴ�.\n");
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
	printf("��й�ȣ %d�� �������ϴ�.\n", count);


	return 0;
}

void showQuestion(int level, int num1, int num2)
{
	printf("=============================================\n\n");
	printf("            ��й�ȣ ������ �����Դϴ�.\n\n");
	printf("=============================================\n\n");
	printf("                %d��° ��й�ȣ\n\n", level);
	printf("                   %d X %d = ? \n\n", num1, num2);
	printf("==============================================\n\n");
	printf("��й�ȣ�� �Է��ϼ���.(���Ḧ ���ϸ� -1 �Է�)\n\n");
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
	printf(">> Good! �����Դϴ�.\n\n");
}

void fail_message(void)
{
	printf(">> Wrong! Ʋ�Ƚ��ϴ�.\n\n");
}
