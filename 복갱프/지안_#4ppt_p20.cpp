#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a[10], b[10], c[10], count=0, temp;
	
	for (int i = 0; i < 10; i++)
		scanf("%d", &a[i]);

	printf("\n");

	for (int i = 0; i < 10; i++)
		printf("%d ", a[i]);

	printf("\n");

	for (int i = 0; i < 10; i++) {
		for (int j = i; j < 10; j++) {
			if (i < j) {
				if (a[i] % 2 == 0) {		//a[i]�� ¦��
					if (a[j] % 2 != 0) {	//a[j]�� Ȧ��
						temp = a[j];
						a[j] = a[i];
						a[i] = temp;
					}
				}
			}
		}
	}
	
	for (int i = 0; i < 10; i++) {
		if (a[i] % 2 != 0)
			count++;
	}
	
	for (int i = 0; i < 10; i++) {		//Ȧ�� ������ŭ �ݺ�
		for (int j = i; j < 10; j++) {
			if (a[i] > a[j]) {
				temp = a[j];
				a[j] = a[i];
				a[i] = temp;
			}
		}
	}

	for (int i = count; i < 10; i++) {
		for (int j = i; j < 10; j++) {
			if (a[i] > a[j]) {
				temp = a[j];
				a[j] = a[i];
				a[i] = temp;
			}
		}
	}

	for(int i=0; i<10; i++)
		printf("%d ", a[i]);

}