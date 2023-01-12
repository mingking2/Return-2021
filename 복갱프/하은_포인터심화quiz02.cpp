#include <stdio.h>
#include <stdlib.h>


int main() {
	char ch[20];

	printf("ют╥б: ");
	for (int i = 0; i < 20; i++) {
		scanf_s("%c", ch + i);
		if (*(ch + i) == '\n')
			break;
	}

	int count = 0;
	while (*(ch + count) != '#') count++;

	for (int i = count - 1; i >= 0; i--) {
		printf("%c", *(ch + i));
	}
}