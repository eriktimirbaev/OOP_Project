#include "TimirbaevCourier.h"
#include "TimirbaevUtilities.h"
#include <format>

using namespace std;
int TimirbaevCourier::MaxId = 0;

istream& operator >> (istream& cin, TimirbaevCourier& courier)
{
	while (true) {
		cout << "¬ведите им€: "; getline(cin, courier.firstname);
		if (courier.firstname.empty()) cout << "ќшибка!" << endl;
		else break;
	}

	while (true) {
		cout << "¬ведите фамилию: "; getline(cin, courier.surname);
		if (courier.surname.empty()) cout << "ќшибка!" << endl;
		else break;
	}

	cout << "¬ведите возраст: "; courier.age = GetCorrectNumber(18, 60);

	while (true) {
		cout << "¬ведите номер телефона: +7"; getline(cin, courier.phone);
		if (not IntCheck(courier.phone) || courier.phone.size() != 10) cout << "ќшибка!" << endl;
		else break;
	}

	return cin;
}

ostream& operator << (ostream& cout, TimirbaevCourier& courier) {
	cout << format("|{:^4}|{:^11}|{:^15}|{:^9}| +7{:^11} |\n", courier.id, courier.firstname, courier.surname, courier.age, courier.phone);
	cout << "------------------------------------------------------------\n";

	return cout;
}

ifstream& operator >> (ifstream& fin, TimirbaevCourier& courier) {
	if (fin.is_open()) {
		fin >> ws;
		fin >> courier.id;
		fin >> courier.firstname;
		fin >> courier.surname;
		fin >> courier.age;
		fin >> courier.phone;
	}
	return fin;
}

ofstream& operator << (ofstream& fout, TimirbaevCourier& courier) {
	if (fout.is_open()) {
		fout << courier.id << endl;
		fout << courier.firstname << endl;
		fout << courier.surname << endl;
		fout << courier.age << endl;
		fout << courier.phone << endl;
	}
	return fout;
}