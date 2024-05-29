/*========================*/
/*   C언어 3월 3주차      */
/*   2037053  이제원       */
/*   피라미드 만들기      */
/*========================*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	//변수를 설정한다.
	int i, j, floor;

	printf("몇층으로 쌓을까요?\n");
	scanf("%d", &floor);

	//원하는 층만큼 피라미드를 쌓는다.
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

/*   예상 출력  */
/*      *       */
/*     ***      */
/*    *****     */
/*   *******    */