/*
#include <iostream>

using namespace std; 

void MyFunc(void) //void를 매개변수(파라미터)로 갖는 함수 MyFunc을 void의 형태로 호출
{
	cout << "MyFunc(void) called" << endl; // "MyFunc(void) called"을 그대로 출력
}

void MyFunc(char c) // char의 자료형을 갖는 MyFunc을 void의 형태로 호출
{
	cout << "MyFunc(char c) called" << endl;
}

void MyFunc(int a, int b)
{
	cout << "MyFunc(int a, int b) called" << endl;
}

int main(void) // main 함수는 리턴값이 return 0;을 거의 고정하기에 int로 호출
{
	MyFunc(); // 이 세 함수는 호출을 하기위한 함수
	MyFunc('A'); //괄호 안에 자료형만 같으면 어떤 문자나 숫자든 상관없음
	MyFunc(12, 13); //ex) MyFunc(45, 67) 이어도 "MyFunc(int a, int b) called"이 호출

	return 0; // main함수(프로젝트의 모든 것)를 정상종료라는 뜻
}
*/