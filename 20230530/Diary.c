/*
+------------------------+
|     �й�: 2037053      |
|     �̸�: ������       |
| ������Ʈ: ����ϱ�     |
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

	printf("'��� �ϱ�'�� ���� ���� ȯ���մϴ�.\n");
	printf("��ȣ�� �Է��ϼ��� >> ");

	while (1)
	{
		ch = getch();
		printf("*");
		if (ch == 13) break;
		in_pass[i] = ch;
		i++;
	}//end of while

	printf("\n=== ��� ��ȣ Ȯ���� ... ===\n\n");

	if (strcmp(pass, in_pass) == 0)
	{
		printf("\n=== ��� ��ȣ ��ġ ===\n");
		printf("=======================��� �ϱ�====================\n");

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
		printf("=== ��� ��ȣ ����ġ ===\n\n");
		printf("���α׷��� �����մϴ�.\n");
	}//end of else

	return 0;
}//end of main
