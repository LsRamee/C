/*
		+---------------------------------------------------------------+
		|				���̹����Ƚ��� B�� C���						|
		|				    2037053 ������								|
		|						4����									|
		|			������Ʈ : �л��� ���� ���ϱ� (switch�����)		|
		+---------------------------------------------------------------+

*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int age,check;
	
	printf("û�ҳ��Ǵ� ���α׷��Դϴ�.\n");
	printf("���α׷��� �����ϽǷ��� '0'�� �Է��ϼ���.\n");
	
	//�Է¹��� ���� ������ ��� �ݺ�
	while (1)
	{
		printf("����� ���̸� �Է��ϼ���.\n");
		check = scanf("%d", &age);

		//�Ϸ¹��� ���� ������ �ƴ� ��
		while (check != 1)
		{
			printf("�߸��� �Է��Դϴ�. ������ �ٽ��Է����ּ���\n");
			//fflush(stdin);
			rewind(stdin);//�ٽ� �Է��� ������ �ִ� �ڵ�

			check = scanf("%d", &age);
		}

		switch (age)
		{
		case 0 :
			printf("���α׷��� �����ϰڽ��ϴ�.\n\n");
			exit(0); //switch �Ӹ� �ƴ϶� while���� �Բ� ���� ����

		//���̿� �´� �л��� ���
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
			printf("����� ���̴� %d��, �ʵ��л��Դϴ�.\n\n",age);
			break;

		case 14:
		case 15:
		case 16:
			printf("����� ���̴� %d��, ���л��Դϴ�.\n\n", age);
			break;

		case 17:
		case 18:
		case 19:
			printf("����� ���̴� %d��, ����л��Դϴ�.\n\n", age);
			break;

		default:
			printf("����� ���̴� %d��, �л��� �ƴմϴ�.\n\n", age);
			break;

		}//end of switch
	}//end of while


	


	return 0;
}