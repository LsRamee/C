/*
+----------------------------+
|        2023.05.16          |
|      학번 : 2037053        |
|      이름 : 이제원         |
|  프로젝트 : 포인트함수 사용|
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