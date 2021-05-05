#include <iostream>
using namespace std;

int main()
{
	while (1)
	{
		int choice;
		int answer;
		int i, h, s, k, r, g;
		int a, b, c, d, e, f;
		int seat1[3][10] = { 0 };
		int seat2[3][10] = { 0 };
		int seat3[3][10] = { 0 };

		cout << "********************SWING CINEMA 오늘의 영화********************" << endl;
		cout << "1. 다들" << endl;
		cout << "2. 앞으로도" << endl;
		cout << "3. 파이팅!" << endl;
		cout << "4. 영화 선택 종료" << endl;
		cout << "영화를 선택하세요. (1,2,3)";
		cout << " ";
		cin >> choice;

		while (1)
		{
			if (choice == 1)
			{
				cout << "다음 중 선택해주세요." << endl;
				cout << "1. 좌석 예약" << endl;
				cout << "2. 예약 취소" << endl;
				cout << "3. 예약 종료" << "\n";
				cin >> answer;

				if (answer == 1)
				{
					cout << "현재의 좌석은 다음과 같습니다" << endl;
					cout << "-----------------------------------------" << endl;
					cout << "1 2 3 4 5 6 7 8 9 10" << endl;
					cout << "-----------------------------------------" << endl;
					for (i = 0; i < 3; i++)
					{
						for (h = 0; h < 10; h++)
						{
							cout << seat1[i][h] << "";
						}
						cout << endl;
					}
					cout << "\n" << endl;
					cout << "몇 열, 몇 번째 좌석을 예약하시겠습니까? ";
					cin >> a >> b;
					cout << endl;

					if (seat1[a - 1][b - 1] == 1)
					{
						cout << "이미 예약된 자리입니다." << endl;
						cout << "\n" << endl;
						cout << "몇 열, 몇 번째 좌석을 예약하시겠습니까? ";
						cin >> a >> b;
						cout << endl;
					}

					if (seat1[a - 1][b - 1] == 0)
					{
						cout << "예약되었습니다." << endl;
						cout << "-----------------------------------------" << endl;
						cout << "1 2 3 4 5 6 7 8 9 10" << endl;
						cout << "-----------------------------------------" << endl;

						seat1[a - 1][b - 1] = 1;
						for (i = 0; i < 3; i++)
						{
							for (h = 0; h < 10; h++)
							{
								cout << seat1[i][h] << "";
							}
							cout << endl;
						}
					}
				}
				else if (answer == 2)
				{
					cout << "현재 예약된 좌석 현황" << endl;
					cout << "-----------------------------------------" << endl;
					cout << "1 2 3 4 5 6 7 8 9 10" << endl;
					cout << "-----------------------------------------" << endl;
					for (i = 0; i < 3; i++)
					{
						for (h = 0; h < 10; h++)
						{
							cout << seat1[i][h] << "";
						}
						cout << endl;
					}
					cout << "\n" << endl;
					cout << "몇 열, 몇 번째 좌석을 예약 취소 하시겠습니까? ";
					cin >> a >> b;
					cout << endl;

					if (seat1[a - 1][b - 1] == 0)
					{
						cout << "예약되지 않은 자리입니다." << endl;
						cout << "\n" << endl;
						cout << "몇 열, 몇 번째 좌석을 취소하시겠습니까? ";
						cin >> a >> b;
						cout << endl;
					}


					if (seat1[a - 1][b - 1] == 1)
					{
						cout << "예약 취소 되었습니다." << endl;
						cout << "-----------------------------------------" << endl;
						cout << "1 2 3 4 5 6 7 8 9 10" << endl;
						cout << "-----------------------------------------" << endl;

						seat1[a - 1][b - 1] = 0;
						for (i = 0; i < 3; i++)
						{
							for (h = 0; h < 10; h++)
							{
								cout << seat1[i][h] << "";
							}
							cout << endl;

						}
					}
				}
				else if (answer == 3)
				{
					cout << "[다들] 좌석 예약 종료" << endl;
					break;
				}
			}
			if (choice == 2)
			{
				cout << "다음 중 선택해주세요." << endl;
				cout << "1. 좌석 예약" << endl;
				cout << "2. 예약 취소" << endl;
				cout << "3. 예약 종료" << "\n";
				cin >> answer;

				if (answer == 1)
				{
					cout << "현재의 좌석은 다음과 같습니다" << endl;
					cout << "-----------------------------------------" << endl;
					cout << "1 2 3 4 5 6 7 8 9 10" << endl;
					cout << "-----------------------------------------" << endl;
					for (s = 0; s < 3; s++)
					{
						for (k = 0; k < 10; k++)
						{
							cout << seat2[s][k] << "";
						}
						cout << endl;
					}
					cout << "\n" << endl;
					cout << "몇 열, 몇 번째 좌석을 예약하시겠습니까? ";
					cin >> c >> d;
					cout << endl;

					if (seat2[c - 1][d - 1] == 1)
					{
						cout << "이미 예약된 자리입니다." << endl;
						cout << "\n" << endl;
						cout << "몇 열, 몇 번째 좌석을 예약하시겠습니까? ";
						cin >> c >> d;
						cout << endl;
					}

					if (seat2[c - 1][d - 1] == 0)
					{
						cout << "예약되었습니다." << endl;
						cout << "-----------------------------------------" << endl;
						cout << "1 2 3 4 5 6 7 8 9 10" << endl;
						cout << "-----------------------------------------" << endl;

						seat2[c - 1][d - 1] = 1;
						for (s = 0; s < 3; s++)
						{
							for (k = 0; k < 10; k++)
							{
								cout << seat2[s][k] << "";
							}
							cout << endl;
						}
					}
				}
				else if (answer == 2)
				{
					cout << "현재 예약된 좌석 현황" << endl;
					cout << "-----------------------------------------" << endl;
					cout << "1 2 3 4 5 6 7 8 9 10" << endl;
					cout << "-----------------------------------------" << endl;
					for (s = 0; s < 3; s++)
					{
						for (k = 0; k < 10; k++)
						{
							cout << seat2[s][k] << "";
						}
						cout << endl;
					}
					cout << "\n" << endl;
					cout << "몇 열, 몇 번째 좌석을 예약 취소 하시겠습니까? ";
					cin >> c >> d;
					cout << endl;

					if (seat2[c - 1][d - 1] == 0)
					{
						cout << "예약되지 않은 자리입니다." << endl;
						cout << "\n" << endl;
						cout << "몇 열, 몇 번째 좌석을 취소하시겠습니까? ";
						cin >> c >> d;
						cout << endl;
					}


					if (seat2[c - 1][d - 1] == 1)
					{
						cout << "예약 취소 되었습니다." << endl;
						cout << "-----------------------------------------" << endl;
						cout << "1 2 3 4 5 6 7 8 9 10" << endl;
						cout << "-----------------------------------------" << endl;

						seat2[c - 1][d - 1] = 0;
						for (s = 0; s < 3; s++)
						{
							for (k = 0; k < 10; k++)
							{
								cout << seat2[s][k] << "";
							}
							cout << endl;

						}
					}
				}
				else if (answer == 3)
				{
					cout << "[앞으로도] 좌석 예약 종료" << endl;
					break;
				}
			}
			if (choice == 3)
			{
				cout << "다음 중 선택해주세요." << endl;
				cout << "1. 좌석 예약" << endl;
				cout << "2. 예약 취소" << endl;
				cout << "3. 예약 종료" << "\n";
				cin >> answer;

				if (answer == 1)
				{
					cout << "현재의 좌석은 다음과 같습니다" << endl;
					cout << "-----------------------------------------" << endl;
					cout << "1 2 3 4 5 6 7 8 9 10" << endl;
					cout << "-----------------------------------------" << endl;
					for (r = 0; r < 3; r++)
					{
						for (g = 0; g < 10; g++)
						{
							cout << seat3[r][g] << "";
						}
						cout << endl;
					}
					cout << "\n" << endl;
					cout << "몇 열, 몇 번째 좌석을 예약하시겠습니까? ";
					cin >> e >> f;
					cout << endl;

					if (seat3[e - 1][f - 1] == 1)
					{
						cout << "이미 예약된 자리입니다." << endl;
						cout << "\n" << endl;
						cout << "몇 열, 몇 번째 좌석을 예약하시겠습니까? ";
						cin >> e >> f;
						cout << endl;
					}

					if (seat3[e - 1][f - 1] == 0)
					{
						cout << "예약되었습니다." << endl;
						cout << "-----------------------------------------" << endl;
						cout << "1 2 3 4 5 6 7 8 9 10" << endl;
						cout << "-----------------------------------------" << endl;

						seat3[e - 1][f - 1] = 1;
						for (r = 0; r < 3; r++)
						{
							for (g = 0; g< 10; g++)
							{
								cout << seat3[r][g] << "";
							}
							cout << endl;
						}
					}
				}
				else if (answer == 2)
				{
					cout << "현재 예약된 좌석 현황" << endl;
					cout << "-----------------------------------------" << endl;
					cout << "1 2 3 4 5 6 7 8 9 10" << endl;
					cout << "-----------------------------------------" << endl;
					for (r = 0; r < 3; r++)
					{
						for (g = 0; g < 10; g++)
						{
							cout << seat3[r][g] << "";
						}
						cout << endl;
					}
					cout << "\n" << endl;
					cout << "몇 열, 몇 번째 좌석을 예약 취소 하시겠습니까? ";
					cin >> e >> f;
					cout << endl;

					if (seat3[e - 1][f - 1] == 0)
					{
						cout << "예약되지 않은 자리입니다." << endl;
						cout << "\n" << endl;
						cout << "몇 열, 몇 번째 좌석을 취소하시겠습니까? ";
						cin >> e >> f;
						cout << endl;
					}


					if (seat3[e - 1][f - 1] == 1)
					{
						cout << "예약 취소 되었습니다." << endl;
						cout << "-----------------------------------------" << endl;
						cout << "1 2 3 4 5 6 7 8 9 10" << endl;
						cout << "-----------------------------------------" << endl;

						seat3[e - 1][f - 1] = 0;
						for (r = 0; r < 3; r++)
						{
							for (g = 0; g < 10; g++)
							{
								cout << seat3[r][g] << "";
							}
							cout << endl;

						}
					}
				}
				else if (answer == 3)
				{
					cout << "[파이팅!] 좌석 예약 종료" << endl;
					break;
				}
			}
			if (choice == 4)
			{
				cout << "********************SWING CINEMA 예약된 좌석 전체 현황********************" << endl;
				cout << "--------------다들--------------" << endl;
				cout << "1 2 3 4 5 6 7 8 9 10" << endl;
				cout << "------------------------------------" << endl;
				for (i = 0; i < 3; i++)
				{
					for (h = 0; h < 10; h++)
					{
						cout << seat1[i][h] << "";
					}
					cout << endl;
				}
				cout << "--------------앞으로도--------------" << endl;
				cout << "1 2 3 4 5 6 7 8 9 10" << endl;
				cout << "------------------------------------" << endl;
				for (s = 0; s < 3; s++)
				{
					for (k = 0; k < 10; k++)
					{
						cout << seat2[s][k] << "";
					}
					cout << endl;
				}
				cout << "--------------파이팅!--------------" << endl;
				cout << "1 2 3 4 5 6 7 8 9 10" << endl;
				cout << "------------------------------------" << endl;
				for (r = 0; r < 3; r++)
				{
					for (g = 0; g < 10; g++)
					{
						cout << seat3[r][g] << "";
					}
					cout << endl;
				}
				cout << "SWING CINEMA를 이용해주셔서 감사합니다." << endl;
				cout << "안녕히가세요" << endl;
				break;
			}
		}
	}
}