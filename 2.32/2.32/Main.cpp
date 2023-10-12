#include <stdio.h>

int main() {
	float height, weight;
	float bmi;

	printf("身高(M): ");
	scanf("%f", &height);
	printf("體重(Kg): ");
	scanf("%f", &weight);

	bmi = weight / (height * height);

	printf("BMI數值對照:\n");
	printf("過瘦：BMI < 18.5:\n");
	printf("適中：18.5 <= BMI < 24.9\n");
	printf("過重：24.9 <= BMI < 29.9\n");
	printf("肥胖：BMI >= 29.9\n");

	if (bmi < 18.5) {
		printf("BMI值= %.2f屬於過瘦\n", bmi);
	}
	else if (bmi >= 18.5 && bmi < 24.9) {
		printf("BMI值=%.2f屬於適中\n", bmi);
	}
	else if (bmi >= 24.9 && bmi < 29.9) {
		printf("BMI值= %.2f屬於過重\n", bmi);
	}
	else {
		printf("BMI值= %.2f屬於肥胖\n", bmi);
	}

	return 0;
}