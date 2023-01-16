#include <stdio.h>  // 문자 빈도수 (소문자 개수 26개??)

int main() {
	char ch[10] = { 0 };
	int letter[26] = { 0 };

	for (int i = 0; i < 10; i++)
		scanf_s("%c", ch + i);

	int i = 0;

	for (int i = 0; i < 10; i++) {
		for (char a = 'a'; a <= 'z'; a++) {
			if (*(ch + i) == a) {
				*(letter + a - 97) += 1;
				break;
			}
		}
	}

	int max = *(letter + 25);
	char max_letter = 0;

	for (int i = 24; i >= 0; i--) {
		if (max < letter[i]) {
			max = letter[i];
			max_letter = i + 97;
		}
	}

	printf("%c %d", max_letter, max);
}