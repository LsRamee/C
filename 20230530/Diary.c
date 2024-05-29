/*
+------------------------+
|     학번: 2037053      |
|     이름: 이제원       |
| 프로젝트: 비밀일기     |
+------------------------+
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	FILE* fp;
	char text[10000], add_text[10000];
	char pass[20] = "1";
	char in_pass[20] = { 0 };
	char ch;
	int i = 0;

	printf("'비밀 일기'에 오신 것을 환영합니다.\n");
	printf("암호를 입력하세요 >> ");

	while (1)
	{
		ch = getch();
		printf("*");
		if (ch == 13) break;
		in_pass[i] = ch;
		i++;
	}//end of while

	printf("\n=== 비밀 번호 확인중 ... ===\n\n");

	if (strcmp(pass, in_pass) == 0)
	{
		printf("\n=== 비밀 번호 일치 ===\n");
		printf("=======================비밀 일기====================\n");

		fp = fopen("C:\\C_File\\Diary.txt", "w");

		while (1)
		{
			if (fgets(text, 10000, fp) == NULL)
			{
				break;
			}//end of if

			printf("%s\n", text);
		}//end of while

		while (1)
		{
			scanf("%[^\n]s", add_text);
			getchar();

			if (strcmp(add_text, "EXIT") == 0)
			{
				break;
			}//end of if

			fprintf(fp, "%s\n", add_text);
		}//end of while

		fclose(fp);
	
	}//end of if
	else
	{
		printf("=== 비밀 번호 불일치 ===\n\n");
		printf("프로그램을 종료합니다.\n");
	}//end of else

	return 0;
}//end of main
