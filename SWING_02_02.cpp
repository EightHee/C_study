#include<iostream>
using namespace std;

int main()
{
	int i, s, k;
	cin >> i;
	for (int s = 1; s <= i * 2; s++) // ��ü �� �� 
	{
		for (int k = 1; k <= i; k++) // ��ü �� ��
		{
			if (s % 2 == 0) // ¦���� ���
			{
				if (k % 2 == 0)
					cout << "*";
				else 
					cout << " ";
			}
			else // Ȧ���� ���
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