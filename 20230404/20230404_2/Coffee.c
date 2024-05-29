/*
		+---------------------------------------------------------------+
		|						사이버보안스쿨 B반 C언어				|
		|							2037053 이제원						|	
		|								5주차							|
		|						프로젝트 : 커피매장이벤트				|					
		+---------------------------------------------------------------+

*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() 
{
	int coffee, sandwich, price;
	
	printf("어서오세요! 저희 매장을 찾아주셔서 감사합니다!\n");
	printf("현재 커피 한잔에 4500원 샌드위치 6000원에 판매를 하고 있습니다.\n");
	printf("*******************이벤트**********************\n");
	printf("  샌드위치를 한개 이상 구매시 커피 3500원!!!\n");
	printf("***********************************************\n");

	//주문
	printf("원하시는 커피의 갯수를 적어주세요 : ");
	scanf("%d", &coffee);
	printf("원하시는 샌드위치의 갯수를 적어주세요 : ");
	scanf("%d", &sandwich);

	//주문내역확인
	if (coffee > 0 && sandwich > 0)
	{
		price = (3500 * coffee) + (6000 * sandwich);
		printf("+-----------주문 메뉴-----------+\n");
		printf("          커피   : %d개 \n", coffee);
		printf("        샌드위치 : %d개 \n", sandwich);
		printf("       총 금액   : %d원 \n", price);
		printf("+-------------------------------+\n");
	}
	else if (coffee > 0 || sandwich > 0)
	{
		price = (4500 * coffee) + (6000 * sandwich);
		printf("+-----------주문 메뉴-----------+\n");
		printf("         커피   : %d개          \n", coffee);
		printf("       샌드위치 : %d개          \n", sandwich);
		printf("       총 금액  : %d원			\n", price);
		printf("+-------------------------------+\n");
	}
	else if (coffee == 0 && sandwich == 0)
	{
		printf("+-----------주문 메뉴-----------+\n");
		printf("|   주문하신 메뉴가 없습니다.   |\n");
		printf("+-------------------------------+\n");
	}
	else
	{
		printf("기기에 이상이 생겼습니다. 직원에게 문의하세요.\n");
	}

	return 0;
}