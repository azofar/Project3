/*
#include <iostream>

using namespace std; 

void MyFunc(void) //void�� �Ű�����(�Ķ����)�� ���� �Լ� MyFunc�� void�� ���·� ȣ��
{
	cout << "MyFunc(void) called" << endl; // "MyFunc(void) called"�� �״�� ���
}

void MyFunc(char c) // char�� �ڷ����� ���� MyFunc�� void�� ���·� ȣ��
{
	cout << "MyFunc(char c) called" << endl;
}

void MyFunc(int a, int b)
{
	cout << "MyFunc(int a, int b) called" << endl;
}

int main(void) // main �Լ��� ���ϰ��� return 0;�� ���� �����ϱ⿡ int�� ȣ��
{
	MyFunc(); // �� �� �Լ��� ȣ���� �ϱ����� �Լ�
	MyFunc('A'); //��ȣ �ȿ� �ڷ����� ������ � ���ڳ� ���ڵ� �������
	MyFunc(12, 13); //ex) MyFunc(45, 67) �̾ "MyFunc(int a, int b) called"�� ȣ��

	return 0; // main�Լ�(������Ʈ�� ��� ��)�� ���������� ��
}
*/