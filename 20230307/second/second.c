#include <stdio.h>


int main()
{
    int a;
    double b;
    char c;

    printf("�����Է� : ");
    scanf_s("%d", &a);
    printf("�Ǽ��Է� : ");
    scanf_s("%lf", &b);//�Ǽ����� %lf ���ּžߵ˴ϴ�. %f�ƴϿ���!
    printf("�����Է� : ");
    scanf_s("%c", &c, sizeof(c));//��� �Էµ� ���ߴµ� �Ѿ��?!

    printf("���� �����ϴ� ������ %d �̴� \n", a);
    printf("���� �����ϴ� �Ǽ��� %f �̴� \n", b);
    printf("���� �����ϴ� ������ %c �̴� \n", c);

    return 0;
}
//int main() {
//    printf("%s", a);
//}