#include <stdio.h>

int main() {
	int num;

	
	printf("��J�@�Ӿ�� ");
	scanf("%d", &num);

	
	if (num % 2 == 0) {
		printf("%d �O���ơC\n", num);
	}
	else {
		printf("%d �O�_�ơC\n", num);
	}

	return 0;
}