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

		cout << "********************SWING CINEMA ������ ��ȭ********************" << endl;
		cout << "1. �ٵ�" << endl;
		cout << "2. �����ε�" << endl;
		cout << "3. ������!" << endl;
		cout << "4. ��ȭ ���� ����" << endl;
		cout << "��ȭ�� �����ϼ���. (1,2,3)";
		cout << " ";
		cin >> choice;

		while (1)
		{
			if (choice == 1)
			{
				cout << "���� �� �������ּ���." << endl;
				cout << "1. �¼� ����" << endl;
				cout << "2. ���� ���" << endl;
				cout << "3. ���� ����" << "\n";
				cin >> answer;

				if (answer == 1)
				{
					cout << "������ �¼��� ������ �����ϴ�" << endl;
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
					cout << "�� ��, �� ��° �¼��� �����Ͻðڽ��ϱ�? ";
					cin >> a >> b;
					cout << endl;

					if (seat1[a - 1][b - 1] == 1)
					{
						cout << "�̹� ����� �ڸ��Դϴ�." << endl;
						cout << "\n" << endl;
						cout << "�� ��, �� ��° �¼��� �����Ͻðڽ��ϱ�? ";
						cin >> a >> b;
						cout << endl;
					}

					if (seat1[a - 1][b - 1] == 0)
					{
						cout << "����Ǿ����ϴ�." << endl;
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
					cout << "���� ����� �¼� ��Ȳ" << endl;
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
					cout << "�� ��, �� ��° �¼��� ���� ��� �Ͻðڽ��ϱ�? ";
					cin >> a >> b;
					cout << endl;

					if (seat1[a - 1][b - 1] == 0)
					{
						cout << "������� ���� �ڸ��Դϴ�." << endl;
						cout << "\n" << endl;
						cout << "�� ��, �� ��° �¼��� ����Ͻðڽ��ϱ�? ";
						cin >> a >> b;
						cout << endl;
					}


					if (seat1[a - 1][b - 1] == 1)
					{
						cout << "���� ��� �Ǿ����ϴ�." << endl;
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
					cout << "[�ٵ�] �¼� ���� ����" << endl;
					break;
				}
			}
			if (choice == 2)
			{
				cout << "���� �� �������ּ���." << endl;
				cout << "1. �¼� ����" << endl;
				cout << "2. ���� ���" << endl;
				cout << "3. ���� ����" << "\n";
				cin >> answer;

				if (answer == 1)
				{
					cout << "������ �¼��� ������ �����ϴ�" << endl;
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
					cout << "�� ��, �� ��° �¼��� �����Ͻðڽ��ϱ�? ";
					cin >> c >> d;
					cout << endl;

					if (seat2[c - 1][d - 1] == 1)
					{
						cout << "�̹� ����� �ڸ��Դϴ�." << endl;
						cout << "\n" << endl;
						cout << "�� ��, �� ��° �¼��� �����Ͻðڽ��ϱ�? ";
						cin >> c >> d;
						cout << endl;
					}

					if (seat2[c - 1][d - 1] == 0)
					{
						cout << "����Ǿ����ϴ�." << endl;
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
					cout << "���� ����� �¼� ��Ȳ" << endl;
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
					cout << "�� ��, �� ��° �¼��� ���� ��� �Ͻðڽ��ϱ�? ";
					cin >> c >> d;
					cout << endl;

					if (seat2[c - 1][d - 1] == 0)
					{
						cout << "������� ���� �ڸ��Դϴ�." << endl;
						cout << "\n" << endl;
						cout << "�� ��, �� ��° �¼��� ����Ͻðڽ��ϱ�? ";
						cin >> c >> d;
						cout << endl;
					}


					if (seat2[c - 1][d - 1] == 1)
					{
						cout << "���� ��� �Ǿ����ϴ�." << endl;
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
					cout << "[�����ε�] �¼� ���� ����" << endl;
					break;
				}
			}
			if (choice == 3)
			{
				cout << "���� �� �������ּ���." << endl;
				cout << "1. �¼� ����" << endl;
				cout << "2. ���� ���" << endl;
				cout << "3. ���� ����" << "\n";
				cin >> answer;

				if (answer == 1)
				{
					cout << "������ �¼��� ������ �����ϴ�" << endl;
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
					cout << "�� ��, �� ��° �¼��� �����Ͻðڽ��ϱ�? ";
					cin >> e >> f;
					cout << endl;

					if (seat3[e - 1][f - 1] == 1)
					{
						cout << "�̹� ����� �ڸ��Դϴ�." << endl;
						cout << "\n" << endl;
						cout << "�� ��, �� ��° �¼��� �����Ͻðڽ��ϱ�? ";
						cin >> e >> f;
						cout << endl;
					}

					if (seat3[e - 1][f - 1] == 0)
					{
						cout << "����Ǿ����ϴ�." << endl;
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
					cout << "���� ����� �¼� ��Ȳ" << endl;
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
					cout << "�� ��, �� ��° �¼��� ���� ��� �Ͻðڽ��ϱ�? ";
					cin >> e >> f;
					cout << endl;

					if (seat3[e - 1][f - 1] == 0)
					{
						cout << "������� ���� �ڸ��Դϴ�." << endl;
						cout << "\n" << endl;
						cout << "�� ��, �� ��° �¼��� ����Ͻðڽ��ϱ�? ";
						cin >> e >> f;
						cout << endl;
					}


					if (seat3[e - 1][f - 1] == 1)
					{
						cout << "���� ��� �Ǿ����ϴ�." << endl;
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
					cout << "[������!] �¼� ���� ����" << endl;
					break;
				}
			}
			if (choice == 4)
			{
				cout << "********************SWING CINEMA ����� �¼� ��ü ��Ȳ********************" << endl;
				cout << "--------------�ٵ�--------------" << endl;
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
				cout << "--------------�����ε�--------------" << endl;
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
				cout << "--------------������!--------------" << endl;
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
				cout << "SWING CINEMA�� �̿����ּż� �����մϴ�." << endl;
				cout << "�ȳ���������" << endl;
				break;
			}
		}
	}
}