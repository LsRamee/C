#include <stdio.h>

int main() {

	char name[256];
	printf("이름이 뭐예요?");
	scanf_s("%s", name, sizeof(name));
	
	int age;
	printf("몇 살이에요?");
	scanf_s("%d", &age);
	
	float weight;
	printf("몸무게는 몇 Kg이세요?");
	scanf_s("%f", &weight);

	double heigth;
	printf("키는 몇 Cm예요?");
	scanf_s(" %lf", &heigth);

	char what[256];
	printf("어떤 범죄를 저질렀나요?");
	scanf_s(" %s", what, sizeof(what));

	printf("\n\n--- 범죄명당 ---\n\n");
	printf("이름		:%s\n", name);
	printf("나이		:%d\n", age);
	printf("몸무게		:%.1fKg\n", weight);
	printf("키		:%.1lfCm\n", heigth);
	printf("범죄명		:%s\n", what);

	return 0;
}