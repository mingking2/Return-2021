#include <stdio.h>

void ABC(int* address, int k) {
	int max = *address, count = 0, temp = *address;
	// �ִ� ã��
	for (int i = 0; i < k; i++) {
		if (max < *(address + i)) {
			max = *(address + i);
			count = i;
		}
	}
	// ��ȯ
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