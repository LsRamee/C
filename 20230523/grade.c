/*
+-----------------------------+
|       학번 : 2037053        |
|       이름 : 이제원         |
|   프로젝트 : 성적표 만들기  |
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

    struct score_card cards[10];//최대 학생수를 10명

    printf("총 학생의 수를 입력해주세요: ");
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
        
        printf("===========%d번째 학생========\n", i+1);

        printf("학번을 입력하세요: ");
        scanf("%s", cards[i].id);

        printf("이름을 입력하세요: ");
        scanf("%s", cards[i].name);

        printf("코딩 과목 점수를 입력하세요: ");
        scanf("%d", &cards[i].coding);

        printf("해킹 과목 점수를 입력하세요: ");
        scanf("%d", &cards[i].hacking);

        printf("데이터베이스 과목 점수를 입력하세요: ");
        scanf("%d", &cards[i].database);

        cards[i].total = cards[i].coding + cards[i].hacking + cards[i].database;
        cards[i].average = (float)cards[i].total / 3;
    }//end of for (input)

    for (i = 0; i < cnt; i++)
    {
        printf("\n===========%d번째 학생===================\n", i + 1);
        printf("「학번」: %s ", cards[i].id);
        printf("「이름」: %s\n", cards[i].name);
        printf("「코딩」: %d ", cards[i].coding);
        printf("「해킹」: %d ", cards[i].hacking);
        printf("「데이터베이스」: %d\n", cards[i].database);
        printf("「총합」: %d ", cards[i].total);
        printf("「평균」: %.2f\n", cards[i].average);
    
    }//end of for(print)
}//end of Scores
