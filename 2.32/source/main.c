#include <stdio.h>
int main(void) {
	float weight;
	float height;
	float bmi;
	printf("��J����(����):");
	scanf("%f", &height);
	printf("��J�魫(����):");
	scanf("%f", &weight);
	bmi = (weight) / (height * height);
	if (bmi < 18.5) {
		printf("�魫�L��\n");
	}
	else if (bmi >= 18.5 && bmi < 24.9) {
		printf("���`\n");
	}
	else if (bmi >= 25 && bmi < 29.9) {
		printf("�L��\n");
	}
	else {
		printf("�έD\n");
	}
	return 0;
}