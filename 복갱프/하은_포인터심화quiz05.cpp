#include <stdio.h>

int main() {
	int ar[5] = { 0 }, copy[5] = { 0 }, rank[5] = { 0 };
	int temp;

	for (int i = 0; i < 5; i++)
		scanf_s("%d", ar + i);

	for (int i = 0; i < 5; i++) { // ����
		*(copy + i) = *(ar + i);
	}

	for (int i = 0; i < 5; i++) {  // ����
		for (int j = 0; j < 5; j++) {
			if (*(ar + i) > *(ar + j)) {
				temp = *(ar + i);
				*(ar + i) = *(ar + j);
				*(ar + j) = temp;
			}
		}
	}

	for (int i = 4; i >= 0; i--) {
		for (int j = 4; j >= 0; j--) {
			if (*(copy + i) == *(ar + j)) {
				*(rank + i) = j + 1;
			}
		}
	}

	for (int i = 0; i < 5; i++) {
		printf("%d = r%d ", *(copy + i), *(rank + i));
	}
}