#include <stdio.h>

/*
문자 #을 포함한 임의 개수(1 이상 20 이하)의 문자를 입력 받은 후, 첫 번째 # 
이전까지의 문자들을 포인터를 사용하여 역순으로 출력하시오. (#이 두 개 있는 경우도 있음)
*/

int main() {

	char ch[20];
	int index = 0;
	char* value = ch;

	for (int i = 0; i < 20; i++) {
		scanf_s("%c", &ch[i]);
		if (ch[i] == '\n')
			break;
	}
	for (index = 0; ch[index] != '#'; index++);
	for (int i = index - 1; i >= 0; i--) {
		printf("%c", *(value + i));
	}
}
	/*
	for (value = ch; *value != '#'; value++) {}
	printf("%c", *value);
	for (value = value - 1; value >= 0; value--) {
		printf("%c", *(ch + *value));
	}

	*/


