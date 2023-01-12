#include <stdio.h>
/*
5개의 정수를 입력 받아 배열 arr[]에 저장하고, 각 정수들의 내림차순 상의 순서
를 배열 rank[]에 저장 한 후 출력하는 프로그램을 작성 하시오.
▶ 반복문으로 배열 훑어볼 시, 주소를 이용하여 반복문 구현(강의자료 p. 51 & 52 참조)
- (예시 2)에서 1 6 4 9 6의 역순은 9 6 6 4 1 이 되고 2등이 2개이며, 2등이 2개인 경우 3등은 없고 4등부터 계속 된다. (즉 같은 등수가 여러 개 있는 경우이다)
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


