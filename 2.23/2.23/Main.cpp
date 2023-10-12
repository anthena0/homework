#include <stdio.h>

int main() {
	double num1, num2, num3;

	
	printf("块计: ");
	scanf("%lf %lf %lf", &num1, &num2, &num3);

	// т程
	double max = (num1 > num2) ? ((num1 > num3) ? num1 : num3) : ((num2 > num3) ? num2 : num3);

	// т程
	double min = (num1 < num2) ? ((num1 < num3) ? num1 : num3) : ((num2 < num3) ? num2 : num3);

	// 块程㎝程
	printf("程: %.2lf\n", max);
	printf("程: %.2lf\n", min);

	return 0;
}