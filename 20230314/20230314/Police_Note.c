#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char name[50], what[256];
	int age;
	float weight;
	double height;

	printf("�̸��� ������?\n");
	scanf("%s", &name);

	printf("���̴� ����̿���?\n");
	scanf("%d", &age);

	printf("�����Դ� �� Kg�̼���?\n");
	scanf("%f", &weight);

	printf("Ű�� �� CM�̼���?\n");
	scanf("%lf", &height);

	printf("� ���˸� ����������?\n");
	scanf("%s", &what);

	printf("\n\n\n");
	printf("===== ������ ���� =====\n");
	printf("   �̸�   : %s\n", name);
	printf("   ����   : %d\n", age);
	printf("   ������ : %.1f Kg\n", weight);
	printf("   Ű     : %.1lf Cm\n", height);
	printf("   ���˸� : %s\n", what);
	printf("=======================\n");
	return 0;
}