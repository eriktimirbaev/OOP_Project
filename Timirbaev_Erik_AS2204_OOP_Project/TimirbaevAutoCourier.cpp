#include "TimirbaevAutoCourier.h"
#include <format>

using namespace std;

void TimirbaevAutoCourier::CreateCourier(istream& in) {
	TimirbaevCourier::CreateCourier(in);
	while (true) {
		cout << "������� ����� ����������: "; getline(cin, car_model);
		if (car_model.empty()) cout << "������!" << endl;
		else break;
	}

	while (true) {
		cout << "������� ����� ����������: "; getline(cin, car_number);
		if (car_number.size() != 9) cout << "������! ����� ������ �������� �� 9 ��������." << endl;
		else break;
	}
}

void TimirbaevAutoCourier::ShowCourier(ostream& out) {
	TimirbaevCourier::ShowCourier(out);
	out << format("{:^15}{:^11}", car_model, car_number);
}
