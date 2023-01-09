#include <stdio.h>

/*
[문제 1] 다음과 같은 순서에 따라 프로그램을 작성하시오. 
1) 포인터 변수 px를 이용하여 사용자로부터 값을 입력받아 x에 저장(즉, scanf 함수의 매개변수로 포인터 변수 px 이용, 변수 x 사용 금지)
   변수 y, z도 동일한 방법으로 값을 입력 받아 저장한다.
2) px, py, pz에 있는 주소들을 py, pz, px로 이동시킨다.
3) 순서가 바뀐 최종 값을 포인터를 이용하여 출력하시오
*/

int main() {

	int x, y, z;
	int *py, * pz, * tmp;

	scanf_s("%d%d%d", &x,&y,&z);
	int *px = &x;
	py = &y;
	pz = &z;
	
	tmp = px;
	px = py;
	py = pz;
	pz = tmp;

	printf("%d %d %d", *px, *py, *pz);
}