#include <iostream>
using namespace std;

int main() {
	int answer; // 좌석 예약 유무 변수
	int i, h; // 배열 객체
	int a , b; // 사용자가 선택할 좌석 변수
	int seat[3][10] = { 0 }; // 3열 10행의 배열 선언 및 0으로 초기화

	while (1) // 사용자가 0을 입력하기 전까지 반복하는 무한 루프 반복문
	{
		cout << "좌석을 예약하시겠습니까? (1 또는 0) ";
		cin >> answer;

		if (answer == 1) // 1을 입력할 시 예약 시작
		{
			cout << "현재의 좌석은 다음과 같습니다" << endl;
			cout << "-----------------------------------------" << endl;
			cout << "1 2 3 4 5 6 7 8 9 10" << endl;
			cout << "-----------------------------------------" << endl;
			for (i = 0; i < 3; i++)
			{
				for (h = 0; h < 10; h++)
				{
					cout << seat[i][h] << "";
				}
				cout << endl;
			}
			cout << "\n" << endl;
			cout << "몇 열, 몇 번째 좌석을 예약하시겠습니까? ";
			cin >> a >> b;
			cout << endl;

			if (seat[a - 1][b - 1] == 0) // 배열의 인덱스는 0부터 시작하므로 1을 빼줌
			{
				cout << "예약되었습니다." << endl;
				cout << "-----------------------------------------" << endl;
				cout << "1 2 3 4 5 6 7 8 9 10" << endl;
				cout << "-----------------------------------------" << endl;
				seat[a - 1][b - 1] = 1; // 선택한 좌석을 1로 바꿈

				for (i = 0; i < 3; i++)
				{
					for (h = 0; h < 10; h++)
					{
						cout << seat[i][h] << "";
					}
					cout << endl;
				}
			}
			else // 이미 예약된 자리를 선택했을 경우
			{
				cout << "이미 예약된 자리입니다." << endl;
			}
		}
		else if (answer == 0) // 0 입력 시엔 좌석 예약 종료하고 반복문 종료
		{
			cout << "좌석 예약 종료" << endl;
			break;
		}
		else // 1, 0이 아닌 다른 숫자를 입력했을 경우
		{
			cout << "1번 또는 0번만 입력하세요." << endl;
		}
	}
	return 0;
}