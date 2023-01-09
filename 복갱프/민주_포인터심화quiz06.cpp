#include <stdio.h>
/*10개의 영문자를 입력받은 후 가장 빈도수가 높은 문자와 그 문자의 빈도수를 출
력하시오.문자의 빈도수가 같은 경우 먼저 나오는 문자를 출력하시오.▶ 배열 선언 이후, 배열 표기[] 는 사용 금지(포인터 표기 사용)
즉, char ch[10]; 배열 선언하고, 이다음부터 배열 표기[] 사용 금지
*/
int main() {
	int Big_num = 0;//현재 빈도수 저장
	int Pre_big = 0; //이전 가장 큰 빈도수
	char Ch_num; //현재 가장 큰 빈도수를 가진 문자열 저장
	char* index; //첫 번째 for문에서 비교 기준이 될 문자
	char* target; //두 번째 for문에서 비교될 문자
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

		if (Big_num > Pre_big) { //현재 빈도수가 이전 빈도수보다 크다면,
			Pre_big = Big_num; //바꾸기
			Ch_num = *index; 
		}
	}
	printf("%c %d",Ch_num, Pre_big);

 }