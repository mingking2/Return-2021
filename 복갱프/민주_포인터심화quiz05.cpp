#include <stdio.h>
/*
5���� ������ �Է� �޾� �迭 arr[]�� �����ϰ�, �� �������� �������� ���� ����
�� �迭 rank[]�� ���� �� �� ����ϴ� ���α׷��� �ۼ� �Ͻÿ�.
�� �ݺ������� �迭 �Ⱦ ��, �ּҸ� �̿��Ͽ� �ݺ��� ����(�����ڷ� p. 51 & 52 ����)
- (���� 2)���� 1 6 4 9 6�� ������ 9 6 6 4 1 �� �ǰ� 2���� 2���̸�, 2���� 2���� ��� 3���� ���� 4����� ��� �ȴ�. (�� ���� ����� ���� �� �ִ� ����̴�)
*/

void swap(int* A, int* B) {
	int temp = *A;
	*A = *B;
	*B = temp;
}


int main() {
	int arr[5], rank[5];
	int* ar_dex = arr;
	int* ra_dex = rank;
	int value = 0;
	int* val_dex = 0;

	scanf_s("%d%d%d%d%d", arr, arr + 1, arr + 2, arr + 3, arr + 4);

	int a1 = *arr;
	int a2 = *(arr + 1);
	int a3 = *(arr + 2);
	int a4 = *(arr + 3);
	int a5 = *(arr + 4);

	for (int i = 0; i < 4; i++) {
		int max = *(ar_dex + i);
		int before_max = max;
		int after_max = 0;
		for (int j = i + 1; j < 5; j++) {
			value = *(ar_dex + j);
			if (value > max) {
				max = value;
				val_dex = arr + j;
				after_max = max;
			}
		}
		if (before_max < after_max) {
			swap(arr + i, val_dex);
		}
		*(ra_dex + i) = *(ar_dex + i);
	}

	*(ra_dex + 4) = *(ar_dex + 4);

	*arr = a1;
	*(arr + 1) = a2;
	*(arr + 2) = a3;
	*(arr + 3) = a4;
	*(arr + 4) = a5;

	printf("\n");
	for (int i = 0; i < 5; i++) {
		if (*(ar_dex + i) == *(ra_dex))
			printf("%d = r1 ", *(ar_dex + i));
		else {
			for (int j = 0; j < 5; j++) {
				if (*(ar_dex + i) == *(ra_dex + j)) {
					printf("%d = r%d ", *(ar_dex + i), j + 1);
					break;
				}
			}
		}
	}
}


