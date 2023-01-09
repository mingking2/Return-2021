#include <stdio.h>  // ����Լ��� 10������ 2������
#include <stdlib.h>

/*
	comment : ������ �ǵ���� �� �����ؼ� ����ȭ�� �ڵ�� �����Ȱ� ����
			  ����Լ��� Ȱ���Ͽ��� �迭�� �������� ����Ǵ� �κб��� �ذ�

*/


int count = 0;

int digit(int n) {  // 10���� -> 2���� ���� ���� �ڸ���
	for (; n > 0; n /= 2) {
		count++;
	}
	return count;
}

int* a = (int*)malloc(sizeof(int) * count);

void binary(int n) {
	static int save = count;
	if (count != 0) {
		a[--count] = n % 2;
		binary(n / 2);
	}
	else {
		for (int i = 0; i < save; i++) {
			printf("%d", a[i]);
		}
	}
}

int main() {
	int input;
	scanf_s("%d", &input);
	digit(input);
	binary(input);
}