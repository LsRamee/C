/*
+----------------------------+
|        2023.05.16          |
|      �й� : 2037053        |
|      �̸� : ������         |
|  ������Ʈ : ����Ʈ�Լ� ���|
+----------------------------+
*/
#include <stdio.h>

void square(int *ptr);

int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int i;

	for (i = 0;i < 10;i++)
	{
		square(&arr[i]);
	}//end of for

	for (i = 0;i < 10;i++)
	{
		printf("%d", arr[i]);
		
		if (i + 1 < 10)
		{
			printf(", ");
		}//end of if
	}//end of for

	return 0;
}//end of main

void square(int *ptr)
{
	if (*ptr % 2 == 0)
	{
		*ptr = (*ptr) * (*ptr);
	}//end of if
}//end of square