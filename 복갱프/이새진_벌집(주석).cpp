#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int num = 0, num_1 = 1;
	int six = 6;
	int sub_1 = 0;
	int count = 0;
	int sub = 1;

	scanf("%d", &num);

	/*
		comment:

		num은 입력받은 값, sub은 첫번째 방을 기준으로 다음 테두리로 늘어나는 칸이 가지는 최대 수 이다.

		테두리가 한칸씩 늘어날수록 6*n 만큼 증가하므로 그 증가되는 값을 sub_1로 정의하였고 
		주어진 조건이 충족되기 전까지 sub에 지속적으로 더해준다.

		이런식으로 반복하다가 sub이 num 이상이 될 때 탈출한다.
		그 이유는 sub이 num보다 커졌다는 것은 num이 sub을 최대로 가지는 테두리에 포함되었기 때문이다.
	*/

	while (1) {
		count++;
		sub_1 = six * num_1;
		num_1++;

		if (num <= sub) { // 만약에 sub가 num보다 크다고 조건을 걸면 sub가 1부터 시작하는데 무슨 숫자를 쓰는 카운트가 1밖에 안됨
						  // 그래서 num이 서브보다 작거나 같다로 설정을 하고 만약에 1이면 1이 서브(1)이랑 작거나 같으니 1번째 출력하고
						  // 만약에 num가 1보다 크다 그러면 sub 조건문 num이 sub보다 작다가 성립이 안되니깐 while문 돌고 sub에다가 sub_1을 더하다 보면
						  // num보다 sub가 크거나 같은 지점까지 감 그러면 num이 sub보다 작거나 같다가 성립이되고 break 걸고 방 번호가 나오는거지
			break;
		}

		sub += sub_1;
	}

	printf("%d", count);

	return 0;
}