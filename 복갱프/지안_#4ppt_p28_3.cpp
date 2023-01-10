#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int reverse(int n) {
	int input, digit;
	input = n;

	//배열 자릿수 계산
	for (int i = 0; n >= 1; i++) {
		n /= 10;
		digit = i;
	}

	//자릿수만큼 arr 크기 할당 및 배열 생성
	int* arr = (int*)malloc(sizeof(int) * digit++);

	//arr 맨 뒤부터, input 앞자리부터 값 삽입
	for (int i = digit-1; i > 0; i--) {
		arr[i] = input / pow(10, i);
		input -= arr[i] * pow(10, i);	
		printf("%d", arr[i]);
	}

	//pow(x, 0)=0이므로 input 1의 자리는 직접 할당
	arr[0] = input;

	//출력
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