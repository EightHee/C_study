#include<iostream>
using namespace std; 

int main()
{
	int a = 10; // a 선언
	int* ptr; // 포인터 선언
	ptr = &a; // ptr에 a의 주소 대입

	cout << "변수 a의 주소는 : " << ptr << endl;
	cout << "a의 값은 : " << *ptr << endl;
	return 0;
}
