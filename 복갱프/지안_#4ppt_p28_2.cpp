//왜 순서대로 잘 돌아가는지 좀 더 공부
//그냥 생각나는대로 썼는데 돌아감
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void binary(int n) {
	if (n == 1) {
		printf("1");
		return;
	}
	binary(n / 2);
	printf("%d", n % 2);
}

int main() {
	int input;
	scanf_s("%d", &input);
	binary(input);
}