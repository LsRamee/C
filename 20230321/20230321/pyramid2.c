/*========================*/
/*   C언어 3월 3주차      */
/*   2037053 이제원       */
/*========================*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	//피라미드를 원하는 값만큼 쌓기
	/*int i, j, floor;

	printf("몇층으로 쌓을까요?\n");
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

	//반복문으로 묶지 않고 하나하나 출력할 때
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
	모양으로 별 쌓기
	*/

	/*int i, j, floor;
	printf("몇층으로 쌓을까요?\n");
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
	모양으로 별 쌓기
	*/
	int i, j, k, floor;

	printf("몇층으로 쌓을까요?\n");
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