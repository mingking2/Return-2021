#include <stdio.h>
#include <stdlib.h>

void ABC(int* addr, int k) {
	int max = *addr, temp = *addr, index = 0;
	for (int i = 0; i < k; i++) {
		if (max < *(addr + i)) {
			max = *(addr + i);
			index = i;
		}
	}
	*addr = max;
	*(addr + index) = temp;
}

int main() {
	int input[10], k = 10;

	for (int i = 0; i < 10; i++) {
		scanf_s("%d", input + i);
	}

	for (int i = 0; i < 10; i++) {
		ABC(input + i, k--);
		printf("%d ", *(input + i));
	}
}