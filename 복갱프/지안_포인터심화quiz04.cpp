#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int main() {
	int a[3], b[3], temp = 0, min;

	scanf("%d %d %d", a, a + 1, a + 2);

	for (int i = 0; i < 3; i++)
		printf("%d ", *(a + i));
	
	for (int i = 0; i < 3; i++) {
		for (int j = i; j < 3; j++) {
			if (*(a + j) < *(a + i)) {
				temp = *(a + j);
				*(a + j) = *(a + i);
				*(a + i) = temp;
			}
		}
	}

	printf("\n%d", *(a+1));
}