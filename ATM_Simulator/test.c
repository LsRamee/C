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
        
        printf("����Ͻ� ���¹�ȣ�� �Է��ϼ���: ");
        scanf("%s", id);

        account_index = chk_account(num, id);
        if (account_index != -1)
        {
           
            printf("��й�ȣ�� �Է��ϼ���: ");
            scanf("%s", pw);

            if (chk_pass(num, account_index, pw))
            {
                
                printf("1. �Ա�\n2. ���\n3. �ܾ� ��ȸ\n4. �۱�\n5. �ŷ���ǥ ���\n6. ����\n");
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
                    printf("�߸��� �����Դϴ�.\n");
                    break;
                }
            }
            else
            {
                printf("��й�ȣ�� ��ġ���� �ʽ��ϴ�.\n");
            }
        }
        else
        {
            printf("�ش� ���¹�ȣ�� �������� �ʽ��ϴ�.\n");
        }
    }

    return 0;
}

void user(struct users* num)
{
    int i;
    for (i = 1; i < 4; i++)
    {
        printf("-------------%d�� ���-------------\n", i);
        printf("���¹�ȣ�� �Է��� �ּ���: ");
        scanf("%s", num[i].id);

        printf("�̸��� �Է��� �ּ���: ");
        scanf("%s", num[i].name);

        printf("��й�ȣ�� �Է��� �ּ���: ");
        scanf("%s", num[i].pw);

        printf("�ݾ��� �Է��� �ּ���: ");
        scanf("%d", &num[i].coin);
    }

    printf("------------------------------------------------\n");
    for (i = 1; i < 4; i++)
    {
        printf("|%d��| ���¹�ȣ: %s | �̸�: %s | ��й�ȣ: %s | �ݾ�: %d \n", i, num[i].id, num[i].name, num[i].pw, num[i].coin);
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
            printf("%d�� ���¸� ����ϰڽ��ϴ�.\n", i);
            return i;
        }
    }
    return -1;
}

int chk_pass(struct users* num, int account_index, char* pw)
{
    if (strcmp(pw, num[account_index].pw) == 0)
    {
        printf("��й�ȣ Ȯ�� �Ϸ�.\n");
        return 1;
    }
    return 0;
}

void chk_balance(struct users* num, int account_index)
{
    printf("���� �ܾ�: %d\n", num[account_index].coin);
}

void withdraw(struct users* num, int account_index)
{
    int amount;
    printf("����� �ݾ��� �Է��ϼ���: ");
    scanf("%d", &amount);

    if (amount <= num[account_index].coin)
    {
        num[account_index].coin -= amount;
        printf("����� �Ϸ�Ǿ����ϴ�. ���� �ܾ�: %d\n", num[account_index].coin);
    }
    else
    {
        printf("�ܾ��� �����մϴ�.\n");
    }
}

void deposit(struct users* num, int account_index)
{
    int amount;
    printf("�Ա��� �ݾ��� �Է��ϼ���: ");
    scanf("%d", &amount);

    num[account_index].coin += amount;
    printf("�Ա��� �Ϸ�Ǿ����ϴ�. ���� �ܾ�: %d\n", num[account_index].coin);
}

void transfer(struct users* num, int account_index)
{
    char target_id[20];
    printf("�۱��� ���¹�ȣ�� �Է��ϼ���: ");
    scanf("%s", target_id);

    int target_index = chk_account(num, target_id);
    if (target_index != -1)
    {
        int amount;
        printf("�۱��� �ݾ��� �Է��ϼ���: ");
        scanf("%d", &amount);

        if (amount <= num[account_index].coin)
        {
            num[account_index].coin -= amount;
            num[target_index].coin += amount;
            printf("�۱��� �Ϸ�Ǿ����ϴ�. ���� �ܾ�: %d\n", num[account_index].coin);
        }
        else
        {
            printf("�ܾ��� �����մϴ�.\n");
        }
    }
    else
    {
        printf("�ش� ���¹�ȣ�� �������� �ʽ��ϴ�.\n");
    }
}

void prn_receipt(struct users* num, int account_index)
{
    printf("�ŷ���ǥ\n");
    printf("------------------------------\n");
    printf("���¹�ȣ: %s\n", num[account_index].id);
    printf("�̸�: %s\n", num[account_index].name);
    printf("���� �ܾ�: %d\n", num[account_index].coin);
    printf("------------------------------\n");
}
