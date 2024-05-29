/*
    +-----------------------------------------------+
	|             ���̹����Ƚ��� B�� C���          |
	|                 2037053 ������                |
	|                     6����                     |
	|             ������Ʈ : 4Ģ���� ����         |
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
				printf("���ϰ��� �ϴ� ���� �ΰ��� �Է��ϼ��� : ");
				scanf("%d %d", &num1, &num2);
				sum(num1, num2);
				break;

			case 2:
				printf("������ �ϴ� ���� �ΰ��� �Է��ϼ��� : ");
				scanf("%d %d", &num1, &num2);
				res = sub(num1, num2);
				printf("%d - %d = %d�Դϴ�.\n\n", num1, num2, res);
				break;

			case 3:
				printf("���ϰ��� �ϴ� ���� �ΰ��� �Է��ϼ��� : ");
				scanf("%d %d", &num1, &num2);
				mul(num1, num2);
				break;

			case 4:
				printf("�������� �ϴ� ���� �ΰ��� �Է��ϼ��� : ");
				scanf("%d %d", &num1, &num2);
				div(num1, num2);
				break;

			case 0:
				printf("���α׷��� �����մϴ�.\n");
				exit(0);

			default:
				printf("�߸��Ȱ��Դϴ�. ���⿡ ���� ���� �Է��ϼ���\n");
				break;

		}//end of switch
	}//end of while
}

//���÷���
void menu_disp()
{
	printf("+--- ��Ģ���� �����Դϴ�. ---+\n");
	printf("|  ���ϴ� ������ �Է��ϼ���    |\n");
	printf("|  1 : ����                    |\n");
	printf("|  2 : ����                    |\n");
	printf("|  3 : ����                    |\n");
	printf("|  4 : ������                  |\n");
	printf("|  0 : ����                    |\n");
	printf("+------------------------------+\n");
}

//���ϱ�
void sum(int a, int b)
{	
	int res;
	res = a + b;
	
	printf("%d + %d = %d �Դϴ�. \n\n", a, b, res);
}

//����
int sub(int a, int b)
{
	int res;

	res = a - b;

	return res;
}

//���ϱ�
void mul(int a, int b)
{
	int res;

	res = a * b;
	
	printf("%d * %d = %d�Դϴ�.\n\n", a, b, res);
}

//������
void div(int a, int b)
{
	double res;

	res = (double)a / (double)b;

	if (b == 0)
	{
		printf("[����]0���� ���� �� �����ϴ�. �ٸ� ���� �Է��ϼ���.\n\n");
	}
	else
	{
		printf("%d / %d = %.2lf �Դϴ�.\n\n", a, b, res);
	}
}