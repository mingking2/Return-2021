#include <stdio.h>

void gcdlcm(int x, int y, int* a, int* b) {

	int value = (x < y) ? x : y;

	for (int i = 1; i < value; i++) {  // 최대공약수
		if (x % i == 0 && y % i == 0) *a = i;
	}

	value = (x > y) ? x : y;

	for (int i = value; ; i++) {  // 최소공배수
		if (i % x == 0 && i % y == 0) {
			*b = i;
			break;
		}
	}
}

int main() {
	int input1, input2;
	int output1, output2;  // output1: 최대공약수, output2: 최소공배수
	scanf_s("%d", &input1);
	scanf_s("%d", &input2);

	gcdlcm(input1, input2, &output1, &output2);

	printf("%d %d", output1, output2);


}