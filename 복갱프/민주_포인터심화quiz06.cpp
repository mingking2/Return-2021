#include <stdio.h>
/*10���� �����ڸ� �Է¹��� �� ���� �󵵼��� ���� ���ڿ� �� ������ �󵵼��� ��
���Ͻÿ�.������ �󵵼��� ���� ��� ���� ������ ���ڸ� ����Ͻÿ�.�� �迭 ���� ����, �迭 ǥ��[] �� ��� ����(������ ǥ�� ���)
��, char ch[10]; �迭 �����ϰ�, �̴������� �迭 ǥ��[] ��� ����
*/
int main() {
	int Big_num = 0;//���� �󵵼� ����
	int Pre_big = 0; //���� ���� ū �󵵼�
	char Ch_num; //���� ���� ū �󵵼��� ���� ���ڿ� ����
	char* index; //ù ��° for������ �� ������ �� ����
	char* target; //�� ��° for������ �񱳵� ����
	char ch[10];
	char* Ch = ch;

	for (int i = 0; i < 10; i++) {
		scanf_s("%c", Ch+i);
	}
	
	Ch_num = *Ch; 
	for (int i = 0; i < 9; i++) {
		Big_num = 1;
		index = Ch + i;
		
		for (int j = i+1; j < 10; j++) {
			target = Ch + j;
			if (*target == *(Ch+i)) {
				Big_num++;
			}
		}

		if (Big_num > Pre_big) { //���� �󵵼��� ���� �󵵼����� ũ�ٸ�,
			Pre_big = Big_num; //�ٲٱ�
			Ch_num = *index; 
		}
	}
	printf("%c %d",Ch_num, Pre_big);

 }