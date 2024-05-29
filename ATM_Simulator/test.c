#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct users
{
    char id[20];
    char name[20];
    char pw[20];
    int coin;
};

void user(struct users* num);
int chk_account(struct users* num, char* id);
int chk_pass(struct users* num, int account_index, char* pw);
void chk_balance(struct users* num, int account_index);
void withdraw(struct users* num, int account_index);
void deposit(struct users* num, int account_index);
void transfer(struct users* num, int account_index);
void prn_receipt(struct users* num, int account_index);

int main()
{
    struct users num[4];
    int run = 1;
    char id[20];
    int account_index ;
    char pw[20];
    int choice;

    user(num);
    while (run == 1)
    {
        
        printf("사용하실 계좌번호를 입력하세요: ");
        scanf("%s", id);

        account_index = chk_account(num, id);
        if (account_index != -1)
        {
           
            printf("비밀번호를 입력하세요: ");
            scanf("%s", pw);

            if (chk_pass(num, account_index, pw))
            {
                
                printf("1. 입금\n2. 출금\n3. 잔액 조회\n4. 송금\n5. 거래명세표 출력\n6. 종료\n");
                scanf("%d", &choice);

                switch (choice)
                {
                case 1:
                    deposit(num, account_index);
                    break;
                case 2:
                    withdraw(num, account_index);
                    break;
                case 3:
                    chk_balance(num, account_index);
                    break;
                case 4:
                    transfer(num, account_index);
                    break;
                case 5:
                    prn_receipt(num, account_index);
                    break;
                case 6:
                    run = 0;
                    break;
                default:
                    printf("잘못된 선택입니다.\n");
                    break;
                }
            }
            else
            {
                printf("비밀번호가 일치하지 않습니다.\n");
            }
        }
        else
        {
            printf("해당 계좌번호가 존재하지 않습니다.\n");
        }
    }

    return 0;
}

void user(struct users* num)
{
    int i;
    for (i = 1; i < 4; i++)
    {
        printf("-------------%d번 사람-------------\n", i);
        printf("계좌번호를 입력해 주세요: ");
        scanf("%s", num[i].id);

        printf("이름을 입력해 주세요: ");
        scanf("%s", num[i].name);

        printf("비밀번호를 입력해 주세요: ");
        scanf("%s", num[i].pw);

        printf("금액을 입력해 주세요: ");
        scanf("%d", &num[i].coin);
    }

    printf("------------------------------------------------\n");
    for (i = 1; i < 4; i++)
    {
        printf("|%d번| 계좌번호: %s | 이름: %s | 비밀번호: %s | 금액: %d \n", i, num[i].id, num[i].name, num[i].pw, num[i].coin);
    }
     printf("------------------------------------------------\n");
}

int chk_account(struct users* num, char* id)
{
    int i;
    for (i = 1; i < 4; i++)
    {
        if (strcmp(id, num[i].id) == 0)
        {
            printf("%d번 계좌를 사용하겠습니다.\n", i);
            return i;
        }
    }
    return -1;
}

int chk_pass(struct users* num, int account_index, char* pw)
{
    if (strcmp(pw, num[account_index].pw) == 0)
    {
        printf("비밀번호 확인 완료.\n");
        return 1;
    }
    return 0;
}

void chk_balance(struct users* num, int account_index)
{
    printf("현재 잔액: %d\n", num[account_index].coin);
}

void withdraw(struct users* num, int account_index)
{
    int amount;
    printf("출금할 금액을 입력하세요: ");
    scanf("%d", &amount);

    if (amount <= num[account_index].coin)
    {
        num[account_index].coin -= amount;
        printf("출금이 완료되었습니다. 현재 잔액: %d\n", num[account_index].coin);
    }
    else
    {
        printf("잔액이 부족합니다.\n");
    }
}

void deposit(struct users* num, int account_index)
{
    int amount;
    printf("입금할 금액을 입력하세요: ");
    scanf("%d", &amount);

    num[account_index].coin += amount;
    printf("입금이 완료되었습니다. 현재 잔액: %d\n", num[account_index].coin);
}

void transfer(struct users* num, int account_index)
{
    char target_id[20];
    printf("송금할 계좌번호를 입력하세요: ");
    scanf("%s", target_id);

    int target_index = chk_account(num, target_id);
    if (target_index != -1)
    {
        int amount;
        printf("송금할 금액을 입력하세요: ");
        scanf("%d", &amount);

        if (amount <= num[account_index].coin)
        {
            num[account_index].coin -= amount;
            num[target_index].coin += amount;
            printf("송금이 완료되었습니다. 현재 잔액: %d\n", num[account_index].coin);
        }
        else
        {
            printf("잔액이 부족합니다.\n");
        }
    }
    else
    {
        printf("해당 계좌번호가 존재하지 않습니다.\n");
    }
}

void prn_receipt(struct users* num, int account_index)
{
    printf("거래명세표\n");
    printf("------------------------------\n");
    printf("계좌번호: %s\n", num[account_index].id);
    printf("이름: %s\n", num[account_index].name);
    printf("현재 잔액: %d\n", num[account_index].coin);
    printf("------------------------------\n");
}
