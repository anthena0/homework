#include <stdio.h>

int main() {
	float totalMileage, gasPrice, mileagePerUnit, parkingFee, tollFee;


	printf("一整天的總里程數(公里/英里)：");
	scanf("%f", &totalMileage);

	printf("汽油一公升/加侖多少錢：");
	scanf("%f", &gasPrice);

	printf("平均一公升/加侖能行駛多少公里：");
	scanf("%f", &mileagePerUnit);

	printf("一天的停車費：");
	scanf("%f", &parkingFee);

	printf("一天的通行費(過路費)：");
	scanf("%f", &tollFee);

	
	float gasCost = (totalMileage / mileagePerUnit) * gasPrice;

	
	float totalCost = gasCost + parkingFee + tollFee;

	
	printf("一天下來開車去工作的花費：%.2f\n", totalCost);

	return 0;
}