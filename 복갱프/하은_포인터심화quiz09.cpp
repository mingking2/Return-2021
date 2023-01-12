#include <stdio.h>

int mid(int x[]) {
	int temp;

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (*(x + i) < *(x + j)) {
				temp = *(x + i);
				*(x + i) = *(x + j);
				*(x + j) = temp;
			}
		}
	}
	return *(x + 1);
}

int main() {
	int a[3] = { 0 };

	for (int i = 0; i < 3; i++)
		scanf_s("%d", a + i);

	int x = mid(a);

	printf("%d", x);
}