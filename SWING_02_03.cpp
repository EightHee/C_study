#include<iostream>
using namespace std; 

int main()
{
	int a = 10; // a ����
	int* ptr; // ������ ����
	ptr = &a; // ptr�� a�� �ּ� ����

	cout << "���� a�� �ּҴ� : " << ptr << endl;
	cout << "a�� ���� : " << a << endl;
	return 0;
}