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
	
	//arr���� �迭 a ����
	for (int i = 0; i < 5; i++) {
		*(a + i) = *(arr + i);
	}

	//a �������� ����
	for (int i = 0; i < 5; i++) {
		for (int j = i; j < 5; j++) {
			if (*(a + j) > *(a + i)) {
				temp = *(a + j);
				*(a + j) = *(a + i);
				*(a + i) = temp;
			}
		}
	} 

	//rank�迭 ����
	for (int i = 0; i < 5; i++) {
		int temp1 = *(arr + i), temp2 = *(arr +i -1);		//temp = �迭 ǥ�� ���ֱ� ���� �ӽ� ����
		if (i > 0 && *(a+temp1) == *(a+temp2))
			rank[i] = rank[i - 1];
		rank[i] = findIndex(arr[i], a);
	}

	//rank �迭 ���
	for (int i = 0; i < 5; i++) {
		printf("%d=r%d ", *(arr+i), *(rank+i));
	}
}