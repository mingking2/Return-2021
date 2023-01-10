#include <stdio.h>

int min(int a, int b) {
	if (a < b)
		return a;
	return b;
}

void gcdlcm(int a, int b, int* gcd, int* lcm) {
	for (int i = 2; i < min(a, b); i++) {
		if (a % i == 0 && b % i == 0)
			*gcd = i;
	}
	*lcm = a * b / (*gcd);
}

int main() {
	int a, b;
	scanf_s("%d %d", &a, &b);
	int gcd = 1, lcm = a * b;		//�⺻�� ����
	gcdlcm(a, b, &gcd, &lcm);
	printf("�ִ�����=%d �ּҰ����=%d", gcd, lcm);
}