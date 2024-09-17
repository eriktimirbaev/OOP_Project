#include <Windows.h>
#include "TimirbaevPark.h"

using namespace std;

void Menu() {
	cout << "����" << endl
		<< "1. �������� �������" << endl
		<< "2. ���������� � �������" << endl
		<< "3. ��������� �� �����" << endl
		<< "4. ��������� � ����" << endl
		<< "5. �������� ������" << endl
		<< "0. �����" << endl
		<< "������� ����� �� 0 �� 5: ";
}

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	TimirbaevPark park;
	while (true) {
		Menu();
		switch (GetCorrectNumber(0, 5))
		{
		case 1:
		{
			park.AddCourier();
			break;
		}
		case 2:
		{
			park.ViewCouriers();
			break;
		}
		case 3:
		{
			park.Dowloand();
			break;
		}
		case 4:
		{
			park.Save();
			break;
		}
		case 5:
		{
			park.DeleteCouriers();
			break;
		}
		case 0:
		{
			exit(0);
			break;
		}
		default: { cout << "������! ������� ����� �� 0 �� 5" << endl; }
		}
	}

	return 0;
}