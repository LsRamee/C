/*========================*/
/*   C��� 3�� 3����      */
/*   2037053  ������       */
/*   �Ƕ�̵� �����      */
/*========================*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	//������ �����Ѵ�.
	int i, j, floor;

	printf("�������� �������?\n");
	scanf("%d", &floor);

	//���ϴ� ����ŭ �Ƕ�̵带 �״´�.
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
	}
	
	return 0;
}

/*   ���� ���  */
/*      *       */
/*     ***      */
/*    *****     */
/*   *******    */