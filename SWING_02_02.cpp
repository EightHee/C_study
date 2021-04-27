#include<iostream>
using namespace std;

int main()
{
	int i, s, k;
	cin >> i;
	for (int s = 1; s <= i * 2; s++) // 전체 행 수 
	{
		for (int k = 1; k <= i; k++) // 전체 열 수
		{
			if (s % 2 == 0) // 짝수인 경우
			{
				if (k % 2 == 0)
					cout << "*";
				else 
					cout << " ";
			}
			else // 홀수인 경우
			{
				if (k % 2 == 0)
					cout << " ";
				else 
					cout << "*";

			}
		}
		cout << endl;
	}
	return 0;
}