#include <Windows.h>
#include "TimirbaevPark.h"

using namespace std;

void Menu() {
	cout << "МЕНЮ" << endl
		<< "1. Добавить курьера" << endl
		<< "2. Информация о курьере" << endl
		<< "3. Загрузить из файла" << endl
		<< "4. Сохранить в файл" << endl
		<< "5. Очистить список" << endl
		<< "0. Выход" << endl
		<< "Введите номер от 0 до 5: ";
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
		default: { cout << "Ошибка! Введите номер от 0 до 5" << endl; }
		}
	}

	return 0;
}