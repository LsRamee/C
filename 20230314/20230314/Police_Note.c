#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char name[50], what[256];
	int age;
	float weight;
	double height;

	printf("이름이 뭐예요?\n");
	scanf("%s", &name);

	printf("나이는 몇살이에요?\n");
	scanf("%d", &age);

	printf("몸무게는 몇 Kg이세요?\n");
	scanf("%f", &weight);

	printf("키는 몇 CM이세요?\n");
	scanf("%lf", &height);

	printf("어떤 범죄를 저질렀나요?\n");
	scanf("%s", &what);

	printf("\n\n\n");
	printf("===== 범죄자 정보 =====\n");
	printf("   이름   : %s\n", name);
	printf("   나이   : %d\n", age);
	printf("   몸무게 : %.1f Kg\n", weight);
	printf("   키     : %.1lf Cm\n", height);
	printf("   범죄명 : %s\n", what);
	printf("=======================\n");
	return 0;
}