#include "TimirbaevCourier.h"
#include "TimirbaevUtilities.h"
#include <format>

using namespace std;
int TimirbaevCourier::MaxId = 0;

//ifstream& operator >> (ifstream& fin, TimirbaevCourier& courier) {
//	if (fin.is_open()) {
//		fin >> ws;
//		fin >> courier.id;
//		fin >> courier.firstname;
//		fin >> courier.surname;
//		fin >> courier.age;
//		fin >> courier.phone;
//	}
//	return fin;
//}
//
//ofstream& operator << (ofstream& fout, TimirbaevCourier& courier) {
//	if (fout.is_open()) {
//		fout << courier.id << endl;
//		fout << courier.firstname << endl;
//		fout << courier.surname << endl;
//		fout << courier.age << endl;
//		fout << courier.phone << endl;
//	}
//	return fout;
//}

void TimirbaevCourier::CreateCourier(istream& in) {
	while (true) {
		cout << "¬ведите им€: "; getline(cin, firstname);
		if (firstname.empty()) cout << "ќшибка!" << endl;
		else break;
	}

	while (true) {
		cout << "¬ведите фамилию: "; getline(cin, surname);
		if (surname.empty()) cout << "ќшибка!" << endl;
		else break;
	}

	cout << "¬ведите возраст: "; age = GetCorrectNumber(18, 60);

	while (true) {
		cout << "¬ведите номер телефона: +7"; getline(cin, phone);
		if (not IntCheck(phone) || phone.size() != 10) cout << "ќшибка!" << endl;
		else break;
	}
}

void TimirbaevCourier::ShowCourier(ostream& out) {
	out << format("{:^4}{:^11}{:^15}{:^9}+7{:^10}", id, surname, firstname, age, phone);
}
