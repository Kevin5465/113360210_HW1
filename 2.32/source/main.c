#include <stdio.h>
int main(void) {
	float weight;
	float height;
	float bmi;
	printf("輸入身高(公尺):");
	scanf("%f", &height);
	printf("輸入體重(公斤):");
	scanf("%f", &weight);
	bmi = (weight) / (height * height);
	if (bmi < 18.5) {
		printf("體重過輕\n");
	}
	else if (bmi >= 18.5 && bmi < 24.9) {
		printf("正常\n");
	}
	else if (bmi >= 25 && bmi < 29.9) {
		printf("過重\n");
	}
	else {
		printf("肥胖\n");
	}
	return 0;
}