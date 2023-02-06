#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

//struct point {
//	int xpos;
//	int ypos;
//};
//
//int main() {
//	struct point pos1, pos2;
//	double distance;
//
//	fputs("point1 pos : ", stdout);
//	scanf("%d %d", &pos1.xpos, &pos1.ypos);
//
//	fputs("point2 pos : ", stdout);
//	scanf("%d %d", &pos2.xpos, &pos2.ypos);
//
//	distance = sqrt((double)((pos1.xpos - pos2.xpos) * (pos1.xpos - pos2.xpos) + (pos1.ypos - pos2.ypos) * (pos1.ypos - pos2.ypos)));
//
//	printf("두 점 사이의 거리 : %g\n", distance);
//
//	return 0;
//}

//struct person {
//	char name[20];
//	char phonenumber[20];
//	int age;
//};
//
//int main() {
//	struct person man1, man2;
//	strcpy(man1.name, "주민기");
//	strcpy(man1.phonenumber, "010-1111-2222");
//	man1.age = 23;
//
//	printf("이름 입력 : "); scanf("%s", man2.name);
//	printf("번호 입력 : "); scanf("%s", man2.phonenumber);
//	printf("나이 입력 : "); scanf("%d", &(man2.age));
//
//	printf("이름 : %s\n", man1.name);
//	printf("번호 : %s\n", man1.phonenumber);
//	printf("나이 : %d\n", man1.age);
//
//	printf("이름 : %s\n", man2.name);
//	printf("번호 : %s\n", man2.phonenumber);
//	printf("나이 : %d\n", man2.age);
//	return 0;
//}

//struct time {
//	int hour = 0;
//	int min = 0;
//	int sec = 0;
//};
//
//int main() {
//	struct time time_1, time_2;
//	scanf("%d %d %d", &time_1.hour, &time_1.min, &time_1.sec);
//	scanf("%d %d %d", &time_2.hour, &time_2.min, &time_2.sec);
//
//	if (time_1.sec > time_2.sec) {
//		time_2.min -= 1;
//		time_2.sec += 60;
//		time_2.sec -= time_1.sec;
//	}
//	else {
//		time_2.sec -= time_1.sec;
//	}
//
//	if (time_1.min > time_2.min) {
//		time_2.hour -= 1;
//		time_2.min += 60;
//		time_2.min -= time_1.min;
//	}
//	else {
//		time_2.min -= time_1.min;
//	}
//
//	time_2.hour -= time_1.hour;
//
//	printf("%d %d %d", time_2.hour, time_2.min, time_2.sec);
//
//	return 0;
//}

//struct score {
//	char name[5];
//	int score;
//};
//
//int main() {
//	int sum = 0, avg = 0;
//	struct score arr[5] = {};
//
//	for (int i = 0; i < 5; i++) {
//		scanf("%s %d", arr[i].name, &arr[i].score);
//		sum += arr[i].score;
//	}
//
//	avg = sum / 5;
//
//	for (int i = 0; i < 5; i++) {
//		if (arr[i].score <= avg) {
//			printf("%s\n", arr[i].name);
//		}
//	}
//
//	return 0;
//}

//struct score {
//	char name[20];
//	int lan;
//	int math;
//	int eng;
//};
//
//int main() {
//	int N = 0;
//	float sum = 0;
//	float avg = 0;
//	struct score arr[20] = {};
//
//	scanf("%d", &N);
//	for (int i = 0; i < N; i++) {
//		scanf("%s %d %d %d", arr[i].name, &arr[i].lan, &arr[i].math, &arr[i].eng);
//		sum = arr[i].lan + arr[i].math + arr[i].eng;
//		avg = sum / 3;
//		if (avg >= 90) {
//			printf("%s %.1f A\n", arr[i].name, avg);
//		}
//		if (avg < 90 && avg >= 80) {
//			printf("%s %.1f B\n", arr[i].name, avg);
//		}
//		if (avg < 80 && avg >= 70) {
//			printf("%s %.1f C\n", arr[i].name, avg);
//		}
//		if (avg < 70) {
//			printf("%s %.1f F\n", arr[i].name, avg);
//		}
//	}
//
//	return 0;
//}

//struct gundaegayazi {  // 문제 6 신체등급
//	int sex;
//	int ki;
//	int mugae;
//};
//
//int main() {
//	int num;
//	int score[3] = {};
//	struct gundaegayazi arr[10] = {};
//
//	scanf("%d", &num);
//
//	for (int i = 0; i < num; i++) {
//		scanf("%d %d %d", &arr[i].sex, &arr[i].mugae, &arr[i].ki);
//		if (arr[i].sex == 1 && arr[i].mugae < 60) {
//			if (arr[i].ki < 165) {
//				score[0] += 1;
//			}
//			else if (165 <= arr[i].ki < 175) {
//				score[1] += 1;
//			}
//			else if (arr[i].ki >= 175) {
//				score[2] += 1;
//			}
//		}
//		else if (arr[i].sex == 1 && 60 <= arr[i].mugae < 70) {
//			if (arr[i].ki < 165) {
//				score[2] += 1;
//			}
//			else if (165 <= arr[i].ki < 175) {
//				score[0] += 1;
//			}
//			else if (arr[i].ki >= 175) {
//				score[1] += 1;
//			}
//		}
//		else if (arr[i].sex == 1 && arr[i].mugae >= 70) {
//			if (arr[i].ki < 165) {
//				score[1] += 1;
//			}
//			else if (165 <= arr[i].ki < 175) {
//				score[2] += 1;
//			}
//			else if (arr[i].ki >= 175) {
//				score[0] += 1;
//			}
//		}
//		else if (arr[i].sex == 2 && arr[i].mugae < 50) {
//			if (arr[i].ki < 165) {
//				score[0] += 1;
//			}
//			else if (165 <= arr[i].ki < 175) {
//				score[1] += 1;
//			}
//			else if (arr[i].ki >= 175) {
//				score[2] += 1;
//			}
//		}
//		else if (arr[i].sex == 2 && 50 <= arr[i].mugae < 60) {
//			if (arr[i].ki < 165) {
//				score[2] += 1;
//			}
//			else if (165 <= arr[i].ki < 175) {
//				score[0] += 1;
//			}
//			else if (arr[i].ki >= 175) {
//				score[1] += 1;
//			}
//		}
//		else if (arr[i].sex == 2 && arr[i].mugae >= 60) {
//			if (arr[i].ki < 165) {
//				score[1] += 1;
//			}
//			else if (165 <= arr[i].ki < 175) {
//				score[2] += 1;
//			}
//			else if (arr[i].ki >= 175) {
//				score[0] += 1;
//			}
//		}
//	}
//
//	for (int i = 0; i < 3; i++) {
//		printf("%d ", score[i]);
//	}
//
//	return 0;
//}

//struct tennumber {   // 문제 7 10개 정수 내림차순
//	int score[11] = {};
//	int arr[11] = {};
//};
//
//int main() {
//	struct tennumber num;
//	for (int i = 0; i < 10; i++) {
//		scanf("%d", &num.arr[i]);
//	}
//
//	for (int i = 0; i < 10; i++) {
//		num.score[i] = 1;
//		for (int j = 0; j < 10; j++) {
//			if (num.arr[i] < num.arr[j]){
//				num.score[i] += 1;
//			}
//		}
//	}
//
//	for (int i = 0; i < 10; i++) {
//		if (num.score[i] == 3 || num.score[i] == 7) {
//			printf("%d ", num.arr[i]);
//		}
//	}
//
//	return 0;
//}

//struct complex {   // 문제 8 복소수
//	float real;
//	float fake;
//};
//
//float add(float a, float b) {
//	float sum = a + b;
//
//	return sum;
//}
//
//int main() {
//	
//	struct complex num1, num2;
//
//	scanf("%f %f", &num1.real, &num1.fake);
//	scanf("%f %f", &num2.real, &num2.fake);
//
//	printf("%.1f ", add(num1.real, num2.real));
//	printf("+ %.1fi", add(num1.fake, num2.fake));
//}

//struct quiz_score { // 문제 12 퀴즈 평균
//	char name[20];
//	float score_1;
//	float score_2;
//	float score_3;
//	float avg;
//	char name_change[20];
//}; struct quiz_score arr[11] = {};
//
//void read_data() {
//	for (int i = 0; i < 10; i++) {
//		scanf("%s %f %f %f", &arr[i].name, &arr[i].score_1, &arr[i].score_2, &arr[i].score_3);
//	}
//}
//
//void cal_avg() {
//	for (int i = 0; i < 10; i++) {
//		arr[i].avg = (arr[i].score_1 + arr[i].score_2 + arr[i].score_3) / 3;
//	}
//}
//
//void sort() {
//	float sub = 0;
//	for (int i = 0; i < 10; i++) {
//		for (int j = i; j < 10; j++) {
//			if (arr[i].avg < arr[j].avg) {
//				sub = arr[i].avg;
//				strcpy(arr[i].name_change, arr[i].name);
//				arr[i].avg = arr[j].avg;
//				arr[j].avg = sub;
//				strcpy(arr[i].name, arr[j].name);
//				strcpy(arr[j].name, arr[i].name_change);
//			}
//		}
//	}
//}
//
//void print_score() {
//	printf("%s %.2f\n", arr[0].name, arr[0].avg);
//	printf("%s %.2f\n", arr[9].name, arr[9].avg);
//	printf("%s %.2f\n", arr[7].name, arr[7].avg);
//	printf("%s %.2f\n", arr[8].name, arr[8].avg);
//	printf("%s %.2f\n", arr[9].name, arr[9].avg);
//}
//
//int main() {
//	read_data();
//	cal_avg();
//	sort();
//	print_score();
//
//	return 0;
//}