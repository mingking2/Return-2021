#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	char lan[1000000] = {};
	int max;
	int sub = 0, count = 0;
	char sub_lan;
	int a = 0;
	int end = 0;
	char alpha = 'a';

	scanf("%s", &lan);
	max = strlen(lan);

	for (int j = 0; j <= max; j++) {
		if ((lan[j] >= 'a') && (lan[j] <= 'z'))
		{
			lan[j] = lan[j] - 'a' + 'A';
		}
	}
	while (a <= max) {
		sub = 0;
		for (int j = a; j <= max; j++) {
			if (lan[a - 1] == lan[a]) {
				break;
			}
			if (lan[a] == lan[j]) {
				sub += 1;
			}
		}
		if (count == sub && count != 1) {
			printf("?");
			break;
		}
		else if (count <= sub) {
			sub_lan = lan[a];
			count = sub;
		}
		if (a == max) {
			printf("%c", sub_lan);
			break;
		}
		if (alpha == lan[a]) {
			end += 1;
			alpha++;
		}
		if (end == 26) {
			break;
		}
		a++;
	}

	return 0;
}