/*========================*/
/*   C��� 3�� 3����      */
/*   2037053 ������       */
/*========================*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	//�Ƕ�̵带 ���ϴ� ����ŭ �ױ�
	/*int i, j, floor;

	printf("�������� �������?\n");
	scanf("%d", &floor);

	for (j = 0; j < floor; j++)
	{
		for (i = 1; i < floor - j; i++)
		{
			printf(" ");
		}
		for (i = 0; i < j * 2 + 1; i++)
		{
			printf("*");
		}

		printf("\n");
	}*/

	//�ݺ������� ���� �ʰ� �ϳ��ϳ� ����� ��
	/*for (i = 0; i < 3; i++)
	{
		printf("S");
	}
	for (i = 0; i < 3; i++)
	{
		printf("*");
	}

	printf("\n");

	for (i = 0; i < 2; i++)
	{
		printf("S");
	}
	for (i = 0; i < 5; i++)
	{
		printf("*");
	}

	printf("\n");

	for (i = 0; i < 1; i++)
	{
		printf("S");
	}
	for (i = 0; i < 7; i++)
	{
		printf("*");
	}

	printf("\n");

	for (i = 0; i < 0; i++)
	{
		printf("S");
	}
	for (i = 0; i < 9; i++)
	{
		printf("*");
	}*/

	/*
	*
	**
	***
	****
	*****
	������� �� �ױ�
	*/

	/*int i, j, floor;
	printf("�������� �������?\n");
	scanf("%d", &floor);

	for (i = 0; i < floor; i++)
	{
		for (j = 0; j <= i; j++)
		{
			printf("*");
		}

		printf("\n");
	}*/

	/*
		*
	   **
	  ***
	 ****
	*****
	������� �� �ױ�
	*/
	int i, j, k, floor;

	printf("�������� �������?\n");
	scanf("%d", &floor);

	for (i = 0; i < floor; i++)
	{
		for (j = i; j < floor - 1; j++)
		{
			printf(" ");
		}
		
		for (k = 0; k <= i; k++)
		{
			printf("*");
		}

		printf("\n");
	}
	
	return 0;
}