#include "TimirbaevPark.h"
#include <filesystem>

using namespace std;

void TimirbaevPark::AddCourier() {
	cout << endl;
	TimirbaevCourier* courier = new TimirbaevCourier;
	cin >> *courier;
	couriers.push_back(courier);
	cout << endl;
}

void TimirbaevPark::ViewCouriers() {
	cout << "\n------------------------------------------------------------\n";
	cout << format("|{:^4}|{:^11}|{:^15}|{:^9}|{:^15}|\n", "Id", "���", "�������", "�������", "�������");
	cout << "------------------------------------------------------------\n";
	for (auto courier : couriers) {
		cout << *courier;
	}
	cout << endl;
}

void TimirbaevPark::DeleteCouriers() {
	for (auto p : couriers) {
		delete p;
	}
	couriers.clear();

	cout << "\n������ ������.\n\n";
}

void TimirbaevPark::Save() {
	if (couriers.size() != 0) {
		cout << "\n������� ��� ����� ��� ����������: ";
		string name; getline(cin, name); name.append(".txt");

		ofstream file;
		file.open(name, ios::out);
		file << couriers.size() << endl;
		for (auto courier : couriers) {
			file << *courier;
		}

		file.close();
		cout << "���� �������!\n\n";
	}
	else cout << "��� �������� ��� ����������!\n\n";
}

void TimirbaevPark::Dowloand() {
	cout << endl;
	ifstream file;
	std::string path = "C:/Users/User/Documents/GitHub/OOP_Project/Timirbaev_Erik_AS2204_OOP_Project";
	vector<std::filesystem::directory_entry> names;
	int count = 0;
	for (auto& name : filesystem::directory_iterator(path)) {
		if (name.path().extension() == ".txt") {
			count++;
			names.push_back(name);
			cout << count << ". " << name.path().filename() << endl;
		}
	}
	if (count > 0) {
		cout << "\n�������� ����: ";
		int download = GetCorrectNumber(1, count);

		DeleteCouriers();
		int couriers_count;

		file.open(names[download - 1]);
		file >> couriers_count;

		while (couriers_count--)
		{
			TimirbaevCourier* courier = new TimirbaevCourier;
			file >> *courier;
			couriers.push_back(courier);
		}
		cout << "�������� ���������!\n\n";
		file.close();
	}
	else cout << "����� �� �������.\n\n";
}