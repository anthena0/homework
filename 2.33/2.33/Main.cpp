#include <stdio.h>

int main() {
	float totalMileage, gasPrice, mileagePerUnit, parkingFee, tollFee;


	printf("�@��Ѫ��`���{��(����/�^��)�G");
	scanf("%f", &totalMileage);

	printf("�T�o�@����/�[�ڦh�ֿ��G");
	scanf("%f", &gasPrice);

	printf("�����@����/�[�گ��p�h�֤����G");
	scanf("%f", &mileagePerUnit);

	printf("�@�Ѫ������O�G");
	scanf("%f", &parkingFee);

	printf("�@�Ѫ��q��O(�L���O)�G");
	scanf("%f", &tollFee);

	
	float gasCost = (totalMileage / mileagePerUnit) * gasPrice;

	
	float totalCost = gasCost + parkingFee + tollFee;

	
	printf("�@�ѤU�Ӷ}���h�u�@����O�G%.2f\n", totalCost);

	return 0;
}