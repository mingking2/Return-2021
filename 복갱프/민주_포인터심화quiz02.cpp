#include <stdio.h>

/*
���� #�� ������ ���� ����(1 �̻� 20 ����)�� ���ڸ� �Է� ���� ��, ù ��° # 
���������� ���ڵ��� �����͸� ����Ͽ� �������� ����Ͻÿ�. (#�� �� �� �ִ� ��쵵 ����)
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


