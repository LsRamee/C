#include <stdio.h>

int main() {

	char name[256];
	printf("�̸��� ������?");
	scanf_s("%s", name, sizeof(name));
	
	int age;
	printf("�� ���̿���?");
	scanf_s("%d", &age);
	
	float weight;
	printf("�����Դ� �� Kg�̼���?");
	scanf_s("%f", &weight);

	double heigth;
	printf("Ű�� �� Cm����?");
	scanf_s(" %lf", &heigth);

	char what[256];
	printf("� ���˸� ����������?");
	scanf_s(" %s", what, sizeof(what));

	printf("\n\n--- ���˸�� ---\n\n");
	printf("�̸�		:%s\n", name);
	printf("����		:%d\n", age);
	printf("������		:%.1fKg\n", weight);
	printf("Ű		:%.1lfCm\n", heigth);
	printf("���˸�		:%s\n", what);

	return 0;
}