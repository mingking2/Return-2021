#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int reverse(int n) {
	int input, digit;
	input = n;

	//�迭 �ڸ��� ���
	for (int i = 0; n >= 1; i++) {
		n /= 10;
		digit = i;
	}

	//�ڸ�����ŭ arr ũ�� �Ҵ� �� �迭 ����
	int* arr = (int*)malloc(sizeof(int) * digit++);

	//arr �� �ں���, input ���ڸ����� �� ����
	for (int i = digit-1; i > 0; i--) {
		arr[i] = input / pow(10, i);
		input -= arr[i] * pow(10, i);	
		printf("%d", arr[i]);
	}

	//pow(x, 0)=0�̹Ƿ� input 1�� �ڸ��� ���� �Ҵ�
	arr[0] = input;

	//���
	printf("%\n");
	for (int i = 0; i < digit; i++) {
		printf("%d ", arr[i]);
	}

	return 0;
}

int main() {
	int n;
	scanf_s("%d", &n);
	reverse(n);
}