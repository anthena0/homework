#include <stdio.h>

int main() {
	double num1, num2, num3;

	
	printf("��J�T�ӼƦr: ");
	scanf("%lf %lf %lf", &num1, &num2, &num3);

	// ���̤j��
	double max = (num1 > num2) ? ((num1 > num3) ? num1 : num3) : ((num2 > num3) ? num2 : num3);

	// ���̤p��
	double min = (num1 < num2) ? ((num1 < num3) ? num1 : num3) : ((num2 < num3) ? num2 : num3);

	// ��X�̤j�ȩM�̤p��
	printf("�̤j��: %.2lf\n", max);
	printf("�̤p��: %.2lf\n", min);

	return 0;
}