#include <stdio.h>


int main()
{
    int a;
    double b;
    char c;

    printf("정수입력 : ");
    scanf_s("%d", &a);
    printf("실수입력 : ");
    scanf_s("%lf", &b);//실수형은 %lf 써주셔야됩니다. %f아니에요!
    printf("문자입력 : ");
    scanf_s("%c", &c, sizeof(c));//어라 입력도 안했는데 넘어가네?!

    printf("내가 좋아하는 정수는 %d 이다 \n", a);
    printf("내가 좋아하는 실수는 %f 이다 \n", b);
    printf("내가 좋아하는 학점은 %c 이다 \n", c);

    return 0;
}
//int main() {
//    printf("%s", a);
//}