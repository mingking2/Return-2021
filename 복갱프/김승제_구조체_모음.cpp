#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//����ü ��ȭ ���� 6��

int answer[3];
typedef struct score {
	int a[3];

}score;
void judge(score s) {
	if (s.a[0] == 2) s.a[1] += 10;   //������ ��� ü�� +10
	int h_score = 2;
	int w_score = 2;
	if (s.a[1] < 60) w_score = 1;   // ü���� ������� 1 2 3 ���� �з�
	else if (s.a[1] >= 70) w_score = 3;

	if (s.a[2] < 165) h_score = 1;   // Ű�� ������� 1 2 3 ���� �з�
	else if (s.a[2] >= 175) h_score = 3;

	if (w_score == h_score) //ǥ�� �̻��ϳ� ��;;
		answer[0]++;
	else if (h_score == 1) {
		if (w_score == 2) answer[2]++;
		else answer[1]++;
	}
	else if (h_score == 2) {
		if (w_score == 1) answer[1]++;
		else answer[2]++;
	}
	else if (h_score == 3) {
		if (w_score == 1) answer[2]++;
		else answer[1]++;
	}
}
int main() {
	score *s;
	int n;
	scanf("%d", &n);
	s = (score*)malloc(n * sizeof(score));

	for (int i = 0; i < n; i++) {
		scanf("%d %d %d", &s[i].a[0], &s[i].a[1], &s[i].a[2]);
		judge(s[i]);
	}
	printf("%d %d %d", answer[0], answer[1], answer[2]);

}

//����ü ��ȭ ���� 7��

//typedef struct soonwe {
//	int num;
//	int sw;
//}SW;
//int main() {
//	SW s[10];
//	int num[10];
//	int tmp;
//	for (int i = 0; i < 10; i++) {  //10�� �޾Ƽ� ����ü�� num�迭�� �Է¼������ ����
//		scanf("%d", &num[i]);
//		s[i].num = num[i];
//	}
//	for (int i = 0; i < 10; i++) {   //�������� ����
//		for (int j = i + 1; j < 10; j++) {
//			if (num[i] < num[j]) {
//				tmp = num[i];
//				num[i] = num[j];
//				num[j] = tmp;
//			}
//		}
//	}
//	for (int i = 0; i < 10; i++) {  //���� ����ؼ� ����ü�迭�� �־���
//		for (int j = 0; j < 10; j++) if (s[i].num == num[j]) s[i].sw = j+1;
//	}
//	for (int i = 0; i < 10; i++) if (s[i].sw == 3) printf("%d ", s[i].num); //3��� 7�� ���
//	for (int i = 0; i < 10; i++) if (s[i].sw == 7) printf("%d", s[i].num);
//
//	/*for (int i = 0; i < 10; i++) printf("[%d %d]\n", s[i].num, s[i].sw);*/  //����ü �迭 Ȯ�ο� �ڵ�
//}