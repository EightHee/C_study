#include <iostream>
using namespace std; //�Է� �� std:: ���� ����

int main() {
	cout << "����� �̸��� �����Դϱ�?:";
	char name[11]; //�̸� �Է�
	cin.getline(name, 11, '\n'); //���� ����� ���� ���� ������ ���ڿ� �Է� �ޱⰡ ������ getline ���
	cout << "�ݰ����ϴ�." << name << "��" << endl; // endl �ٹٲ�

	int apple, banana, orange; //������ ���� ����
	int a, b, c; //������ ���� ����
	int cost; //�ѱݾ� ����

	cout << "apple�� ������ ���Դϱ�?"; 
	cin >> apple;
	cout << "banana�� ������ ���Դϱ�?"; //������ ���� �Է�
	cin >> banana;
	cout << "orange�� ������ ���Դϱ�?";
	cin >> orange;

	cout << "apple�� �� �� �ֽ��ϱ�?";
	cin >> a;
	cout << "banana�� �� �� �ֽ��ϱ�?"; //������ ���� �Է�
	cin >> b;
	cout << "orange�� �� �� �ֽ��ϱ�?";
	cin >> c;

	cost = apple * a + banana * b + orange * c - 500; //�� �ݾװ� 500�� ����
	cout << "��" << cost << "�� �Դϴ�.";

	return 0; 

}