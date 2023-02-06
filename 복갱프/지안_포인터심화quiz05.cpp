#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int findIndex(int n, int* arr) {
	for (int i = 0; i < 5; i++) {
		if (n == arr[i])
			return ++i;
	}
}

int main() {
	int arr[5], a[5], temp, rank[5];

	scanf("%d %d %d %d %d", arr, arr + 1, arr + 2, arr + 3, arr + 4);
	
	//arr복제 배열 a 생성
	for (int i = 0; i < 5; i++) {
		*(a + i) = *(arr + i);
	}

	//a 내림차순 정렬
	for (int i = 0; i < 5; i++) {
		for (int j = i; j < 5; j++) {
			if (*(a + j) > *(a + i)) {
				temp = *(a + j);
				*(a + j) = *(a + i);
				*(a + i) = temp;
			}
		}
	} 

	//rank배열 생성
	for (int i = 0; i < 5; i++) {
		int temp1 = *(arr + i), temp2 = *(arr +i -1);		//temp = 배열 표현 없애기 위한 임시 변수
		if (i > 0 && *(a+temp1) == *(a+temp2))
			rank[i] = rank[i - 1];
		rank[i] = findIndex(arr[i], a);
	}

	//rank 배열 출력
	for (int i = 0; i < 5; i++) {
		printf("%d=r%d ", *(arr+i), *(rank+i));
	}
}