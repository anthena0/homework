#include <stdio.h>

int main() {
	int num;

	
	printf("块俱计 ");
	scanf("%d", &num);

	
	if (num % 2 == 0) {
		printf("%d 琌案计\n", num);
	}
	else {
		printf("%d 琌计\n", num);
	}

	return 0;
}