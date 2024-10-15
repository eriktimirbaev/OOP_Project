#include "TimirbaevPark.h"
#include <filesystem>

BOOST_CLASS_EXPORT_GUID(TimirbaevCourier, "TimirbaevCourier")
BOOST_CLASS_EXPORT_GUID(TimirbaevAutoCourier, "TimirbaevAutoCourier")

using namespace std;

void TimirbaevPark::AddCourier() {
	shared_ptr<TimirbaevCourier> ptr = make_shared<TimirbaevCourier>();
	ptr->CreateCourier(cin);
	couriers.push_back(ptr);
}

void TimirbaevPark::AddAutoCourier() {
	shared_ptr<TimirbaevAutoCourier> ptr = make_shared<TimirbaevAutoCourier>();
	ptr->CreateCourier(cin);
	couriers.push_back(ptr);
}

//void TimirbaevPark::ViewCouriers() {
//	cout << "\n------------------------------------------------------------\n";
//	cout << format("|{:^4}|{:^11}|{:^15}|{:^9}|{:^15}|\n", "Id", "Имя", "Фамилия", "Возраст", "Телефон");
//	cout << "------------------------------------------------------------\n";
//	for (auto courier : couriers) {
//		cout << *courier;
//	}
//	cout << endl;
//}

void TimirbaevPark::DeleteCouriers() {
	couriers.clear();
	cout << "Список очищен.\n";
}

void TimirbaevPark::SaveSer() {
	if (couriers.size() != 0) {
		string name;
		while (true) {
			cout << "\nВведите имя файла для сохранения: ";
			getline(cin, name);
			if (name.empty()) continue;
			else break;
		}
		name.append(".txt");

		ofstream fout(name);
		if (fout) {
			boost::archive::text_oarchive oa(fout);
			oa << couriers;
			fout.close();
			cout << "Файл сохранён!\n\n";
		}
		else cerr << "Ошибка открытия файла!\n\n";
	}
	else cout << "Нет объектов для сохранения!\n\n";
}

void TimirbaevPark::LoadSer() {
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
		cout << "\nВыберите файл: ";
		int download = GetCorrectNumber(1, count);

		DeleteCouriers();
		ifstream fin;
		fin.open(names[download - 1]);

		if (fin) {
			try {
				boost::archive::text_iarchive ia(fin);
				ia >> couriers;
				cout << "Загрузка завершена!\n\n";
			}
			catch (const exception& e)
			{
				cout << "Ошибка: файл поврежден\n\n";
				DeleteCouriers();
			}
			fin.close();
		}
		else cerr << "Ошибка открытия файла!\n\n";
	}
	else cout << "Файлы не найдены.\n\n";
}

ostream& operator<<(ostream& out, TimirbaevPark& g)
{
	out << "Курьеры парка:";
	for (auto& student : g.couriers) {
		out << endl;
		student->ShowCourier(cout);
	}
	out << endl;
	return out;
}
