#include "TimirbaevAutoCourier.h"
#include <format>

using namespace std;

void TimirbaevAutoCourier::CreateCourier(istream& in) {
	TimirbaevCourier::CreateCourier(in);
	while (true) {
		cout << "Введите марку автомобиля: "; getline(cin, car_model);
		if (car_model.empty()) cout << "Ошибка!" << endl;
		else break;
	}

	while (true) {
		cout << "Введите номер автомобиля: "; getline(cin, car_number);
		if (car_number.size() != 9) cout << "Ошибка! Номер должен состоять из 9 символов." << endl;
		else break;
	}
}

void TimirbaevAutoCourier::ShowCourier(ostream& out) {
	TimirbaevCourier::ShowCourier(out);
	out << format("{:^15}{:^11}", car_model, car_number);
}
