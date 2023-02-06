#include <stdio.h>

void ABC(int* address, int k) {
	int max = *address, count = 0, temp = *address;
	// 최댓값 찾기
	for (int i = 0; i < k; i++) {
		if (max < *(address + i)) {
			max = *(address + i);
			count = i;
		}
	}
	// 교환
	*address = max;
	*(address + count) = temp;
}

int main() {
	int a[10] = { 0 };
	for (int i = 0; i < 10; i++) {
		scanf_s("%d", a + i);
	}

	for (int i = 0; i < 10; i++) {
		ABC(a + i, 10 - i);
	}

	for (int i = 0; i < 10; i++) {
		printf("%d ", *(a + i));
	}
}