/*
+-----------------------------+
|       �й� : 2037053        |
|       �̸� : ������         |
|   ������Ʈ : ����ǥ �����  |
+-----------------------------+
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

struct score_card
{
    char id[10];
    char name[10];
    int coding;
    int hacking;
    int database;
    int total;
    float average;
};

void Scores(struct score_card* cards, int cnt);

int main()
{
    int cnt;

    struct score_card cards[10];//�ִ� �л����� 10��

    printf("�� �л��� ���� �Է����ּ���: ");
    scanf("%d", &cnt);

    Scores(cards, cnt);

    return 0;
}

void Scores(struct score_card* cards, int cnt)
{
    int i;

    for (i = 0; i < cnt; i++)
    {
        rewind(stdin);
        
        printf("===========%d��° �л�========\n", i+1);

        printf("�й��� �Է��ϼ���: ");
        scanf("%s", cards[i].id);

        printf("�̸��� �Է��ϼ���: ");
        scanf("%s", cards[i].name);

        printf("�ڵ� ���� ������ �Է��ϼ���: ");
        scanf("%d", &cards[i].coding);

        printf("��ŷ ���� ������ �Է��ϼ���: ");
        scanf("%d", &cards[i].hacking);

        printf("�����ͺ��̽� ���� ������ �Է��ϼ���: ");
        scanf("%d", &cards[i].database);

        cards[i].total = cards[i].coding + cards[i].hacking + cards[i].database;
        cards[i].average = (float)cards[i].total / 3;
    }//end of for (input)

    for (i = 0; i < cnt; i++)
    {
        printf("\n===========%d��° �л�===================\n", i + 1);
        printf("���й���: %s ", cards[i].id);
        printf("���̸���: %s\n", cards[i].name);
        printf("���ڵ���: %d ", cards[i].coding);
        printf("����ŷ��: %d ", cards[i].hacking);
        printf("�������ͺ��̽���: %d\n", cards[i].database);
        printf("�����ա�: %d ", cards[i].total);
        printf("����ա�: %.2f\n", cards[i].average);
    
    }//end of for(print)
}//end of Scores
