#include <Windows.h>
#include "TimirbaevPark.h"

using namespace std;

void Menu() {
	cout << "����" << endl
		<< "1. �������� �������" << endl
		<< "2. �������� �����������" << endl
		<< "3. ���������� � ��������" << endl
		<< "4. ��������� �� �����" << endl
		<< "5. ��������� � ����" << endl
		<< "6. �������� ������" << endl
		<< "0. �����" << endl
		<< "������� ����� �� 0 �� 6: ";
}

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	TimirbaevPark park;
	while (true) {
		Menu();
		switch (GetCorrectNumber(0, 6))
		{
		case 1:
		{	
			cout << endl;
			park.AddCourier();
			cout << endl;
			break;
		}
		case 2:
		{
			cout << endl;
			park.AddAutoCourier();
			cout << endl;
			break;
		}
		case 3:
		{
			cout << endl;
			cout << park;
			cout << endl;
			break;
		}
		case 4:
		{
			//park.Dowloand();
			break;
		}
		case 5:
		{
			//park.Save();
			break;
		}
		case 6:
		{
			cout << endl;
			park.DeleteCouriers();
			cout << endl;
			break;
		}
		case 0:
		{
			exit(0);
			break;
		}
		default: { cout << "������! ������� ����� �� 0 �� 6" << endl; }
		}
	}

	return 0;
}