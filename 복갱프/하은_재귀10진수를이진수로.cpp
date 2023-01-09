#include <stdio.h>  // 재귀함수로 10진수를 2진수로
#include <stdlib.h>

/*
	comment : 지난번 피드백을 잘 수용해서 최적화된 코드로 정리된게 보임
			  재귀함수를 활용하였고 배열에 역순으로 저장되는 부분까지 해결

*/


int count = 0;

int digit(int n) {  // 10진수 -> 2진수 했을 때의 자릿수
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