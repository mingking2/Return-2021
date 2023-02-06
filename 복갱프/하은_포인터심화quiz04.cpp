#include <stdio.h>

int main() {
	int ar[3] = { 0 };
	int temp;

	for (int i = 0; i < 3; i++)
		scanf_s("%d", ar + i);

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (*(ar + i) < *(ar + j)) {
				temp = *(ar + i);
				*(ar + i) = *(ar + j);
				*(ar + j) = temp;
			}
		}
	}

	printf("%d", *(ar + 1));
}