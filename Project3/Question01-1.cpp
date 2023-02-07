/*
@문제 1@
사용자로부터 총 5개의 정수를 입력 받아서, 그 합을 출력하는 프로그램을 작성해 보자.
단, 프로그램의 실행은 다음과 같이 이뤄져야 한다.
[실행의 예]
1번째 정수 입력 : 1
2번째 정수 입력 : 2
3번째 정수 입력 : 3
4번째 정수 입력 : 4
5번째 정수 입력 : 5
합계 : 15

#include <iostream>
int main(void)
{
	using namespace std;

	int num1 = 0;
	cout << "1번째 정수 입력 : ";
	cin >> num1;

	int num2 = 0;
	cout << "2번째 정수 입력 : ";
	cin >> num2;

	int num3 = 0;
	cout << "3번째 정수 입력 : ";
	cin >> num3;

	int num4 = 0;
	cout << "4번째 정수 입력 : ";
	cin >> num4;

	int num5 = 0;
	cout << "5번째 정수 입력 : ";
	cin >> num5;

	int sum = num1 + num2 + num3 + num4 + num5;
	cout << "합계 :" << sum<<endl;

	return 0;
}
*/
/*
@문제 2@
프로그램 사용자로부터 이름과 전화번호를 문자열의 형태로 입력 받아서,
입력 받은 데이터를 그대로 출력하는 프로그램을 작성해 보자.

#include <iostream>

int main(void)
{
	using namespace std;

	char name[100];
	char call[100];

	cout << "이름 ? : ";
	cin >> name;

	cout << "전화번호 ? : ";
	cin >> call;

	cout << "이름은 " << name << "이고, 전화번호는 " << call << "입니다."<<endl;

	return 0;
}
*/
/*
@문제 3@
숫자를 하나 입력 받아서 그 숫자에 해당하는 구구단을 출력하는 프로그램을 작성해보자.
예를 들어서 사용자가 5를 입력한다면 구구단에서 5단을 출력해야 한다.

#include <iostream>

int main(void)
{
	using namespace std;

	int num;
	int result;

	cout << "구구단을 외우자! 몇 단? : ";
	cin >> num;

	for (int i=1; i<10; i++)
	{
		result = num * i;
		cout << num<<'x'<<i<<'='<<result<<endl;
	}

	return 0;
}
*/
/*
@문제 4@
판매원들의 급여 계산 프로그램을 작성해 보자.
이 회사는 모든 판매원에게 매달 50만원의 기본 급여와 물품 판매 가격의 12%에
해당하는 돈을 지급한다. 예를 들어서 민수라는 친구의 이번 달 물품 판매 금액이 
100만원이라면, 50+100X0.12 = 62만원, 따라서 62만원을 급여로 지금 받는다.
단, 아래의 실행의 예에서 보이듯이
이러한 급여의 계산은 -1이 입력될 때까지 계속 되어야 한다.

[실행의 예]
판매 금액을 만원 단위로 입력(-1 to end): 100
이번 달 급여 : 62만원
판매 금액을 만원 단위로 입력(-1 to end) : 200
이번 달 급여 : 74만원
판매 금액을 만원 단위로 입력(-1 to end) : -1
프로그램을 종료합니다.

#include <iostream>

int main(void)
{
	using namespace std;

	int num = 0;
	int result = 0;

	cout << "판매 금액을 만원 단위로 입력(-1 to end) : ";
	cin >> num;

	while (num != -1)
	{
		result = 50 + num * 0.12;
		cout << "이번 달 급여 : "<< result<<endl;
		cout << "판매 금액을 만원 단위로 입력(-1 to end) : ";
		cin >> num;

		if (num == -1) {
			cout << "프로그램을 종료합니다.";
			break;
		}
	}

	return 0;
}
*/
/*
@번외 문제 백준 1110번 문제@
0보다 크거나 같고, 99보다 작거나 같은 정수가 주어질 때,
다음과 같은 연산을 할 수 있다.
먼저 주어진 수가 10보다 작다면 앞에 0을 붙여 두 자리 수로 만들고,
각 자리의 숫자를 더한다.
그 다음, 주어진 수의 가장 오른쪽 자리 수와 앞에서 구한 합의 가장 오른쪽 자리 수를
이어 붙이면 새로운 수를 만들 수 있다. 다음 예를 보자.
26은 2+6=8, 새로운 숫자 : 68
이렇게 하여 다시 26이 되는 사이클 계산해보자. 26은 4사이클
*/
#include <iostream>

using namespace std;

int main(void) {
	int A, N;
	int count = 0;
	cin >> A;

	N = A;

	do {
		N = (N % 10) * 10 + ((N / 10) + (N % 10)) % 10;
		count++;
	} while (A != N);

	cout << "사이클은 : " << count << "\n";
	return 0;
}