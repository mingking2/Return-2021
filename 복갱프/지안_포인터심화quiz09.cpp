#include <stdio.h>

int mid(int *a) {
	int temp;
	for (int i = 0; i < 3; i++) {
		for (int j = i; j < 3; j++) {
			if (*(a + j) < *(a + i)) {
				temp = *(a + j);
				*(a + j) = *(a + i);
				*(a + i) = temp;
			}
		}
	}
	return *(a + 1);
}

int main() {
	int a[3];
	scanf_s("%d %d %d", &a[0], &a[1], &a[2]);
	printf("%d", mid(a));
}