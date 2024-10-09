#include <Windows.h>
#include "TimirbaevPark.h"

using namespace std;

void Menu() {
	cout << "МЕНЮ" << endl
		<< "1. Добавить курьера" << endl
		<< "2. Добавить автокурьера" << endl
		<< "3. Информация о курьерах" << endl
		<< "4. Загрузить из файла" << endl
		<< "5. Сохранить в файл" << endl
		<< "6. Очистить список" << endl
		<< "0. Выход" << endl
		<< "Введите номер от 0 до 6: ";
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
		default: { cout << "Ошибка! Введите номер от 0 до 6" << endl; }
		}
	}

	return 0;
}