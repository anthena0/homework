#include <stdio.h>

int main() {
	float height, weight;
	float bmi;

	printf("����(M): ");
	scanf("%f", &height);
	printf("�魫(Kg): ");
	scanf("%f", &weight);

	bmi = weight / (height * height);

	printf("BMI�ƭȹ��:\n");
	printf("�L�G�GBMI < 18.5:\n");
	printf("�A���G18.5 <= BMI < 24.9\n");
	printf("�L���G24.9 <= BMI < 29.9\n");
	printf("�έD�GBMI >= 29.9\n");

	if (bmi < 18.5) {
		printf("BMI��= %.2f�ݩ�L�G\n", bmi);
	}
	else if (bmi >= 18.5 && bmi < 24.9) {
		printf("BMI��=%.2f�ݩ�A��\n", bmi);
	}
	else if (bmi >= 24.9 && bmi < 29.9) {
		printf("BMI��= %.2f�ݩ�L��\n", bmi);
	}
	else {
		printf("BMI��= %.2f�ݩ�έD\n", bmi);
	}

	return 0;
}