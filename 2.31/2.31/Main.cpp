#include <stdio.h>

int main() {
	int i;

	printf("�ƭ�\t����\t�ߤ�\n");
	for (i = 0; i <= 10; i++) {
		printf("%d\t%d\t%d\n", i, i * i, i * i * i);
	}

	return 0;
}