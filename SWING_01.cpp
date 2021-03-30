#include <iostream>
using namespace std; //입력 시 std:: 생략 가능

int main() {
	cout << "당신의 이름은 무엇입니까?:";
	char name[11]; //이름 입력
	cin.getline(name, 11, '\n'); //띄어쓰기 사용을 위해 공백 포함한 문자열 입력 받기가 가능한 getline 사용
	cout << "반갑습니다." << name << "님" << endl; // endl 줄바꿈

	int apple, banana, orange; //과일의 가격 선언
	int a, b, c; //과일의 개수 선언
	int cost; //총금액 선언

	cout << "apple의 가격은 얼마입니까?"; 
	cin >> apple;
	cout << "banana의 가격은 얼마입니까?"; //과일의 가격 입력
	cin >> banana;
	cout << "orange의 가격은 얼마입니까?";
	cin >> orange;

	cout << "apple은 몇 개 있습니까?";
	cin >> a;
	cout << "banana는 몇 개 있습니까?"; //과일의 개수 입력
	cin >> b;
	cout << "orange은 몇 개 있습니까?";
	cin >> c;

	cost = apple * a + banana * b + orange * c - 500; //총 금액과 500원 할인
	cout << "총" << cost << "원 입니다.";

	return 0; 

}