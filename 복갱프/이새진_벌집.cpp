#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int num = 0, num_1 = 1;
	int six = 6;
	int sub_1 = 0;
	int count = 0;
	int sub = 1;

	scanf("%d", &num);

	while (1) {
		count++;
		sub_1 = six * num_1;
		num_1++;

		if (num == 1) {
			count = 1;
		}

		if (num <= sub) {
			break;
		}

		sub += sub_1;
	}

	printf("%d", count);

	return 0;
}