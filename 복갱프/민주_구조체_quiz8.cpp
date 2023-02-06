#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
//전역변수 사용 금지 문제

struct complex {
	double real_num;
	double fake_num;
};

struct complex add(struct complex s1, struct complex s2) {
	struct complex answer;
	answer.real_num = s1.real_num + s2.real_num;
	answer.fake_num = s1.fake_num + s2.fake_num;
	printf("answer : %.1lf %.1lfi\n", answer.real_num, answer.fake_num);

	return answer;
	
}
int main(void) {
	struct complex s1;
	struct complex s2;

	scanf("%f %f", &s1.real_num, &s1.fake_num);
	scanf("%f %f", &s2.real_num, &s2.fake_num);
	struct complex answer = add(s1, s2);
	printf("%.1f %.1fi", answer.real_num, answer.fake_num);
	

}


