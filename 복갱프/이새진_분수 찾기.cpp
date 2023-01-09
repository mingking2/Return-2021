#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int num = 1;
	int count = 0, count2 = 0;
	int a = 0, b = 0;

	scanf("%d", &count);

	while (1) {
		a++;
		b = a;
		for (int i = 1; i <= a; i++) {
			count2++;
			if (count == count2) {
				if (a % 2 == 0) {
					printf("%d/%d", i, b);
				}
				if (a % 2 == 1) {
					printf("%d/%d", b, i);
				}
			}
			if (count == count2) {
				break;
			}
			b--;
		}
		if (count == count2) {
			break;
		}
	}

	return 0;
}