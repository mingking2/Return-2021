#include <stdio.h>

/*N개의 정수를 입력 받은 후(N ≤ 50), 0 이 나오기 전까지의 정수 개수를 출력하
는 프로그램을 작성하시오. - 0 은 오직 한 번만 나타난다.▶ 배열 선언 이후, 배열 표기[] 는 사용 금지(포인터 표기 사용)
*/
int main() {
	int ar[50] = { 0 }, N, cnt=0;
	int* p, * ar_end, * pN = &N;
	printf("몇 개의 정수를 입력하나요? : ");
	scanf_s("%d", pN);
	ar_end = ar + *pN;
	printf("해당 개수의 정수를 입력하시오(0포함) : ");
	for (p = ar; p < ar_end; p++) {
		scanf_s("%d", p);
	}
	for (p = ar; *p !=0 ; p++) {
		cnt++;
	}
	printf("0이 나오기 전 정수의 개수는 : %d", cnt);

}

