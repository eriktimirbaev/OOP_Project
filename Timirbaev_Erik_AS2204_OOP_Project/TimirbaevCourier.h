#pragma once
#include <iostream>
#include <fstream>
#include <string>

class TimirbaevCourier
{
private:
	int id;
	std::string firstname;
	std::string surname;
	int age;
	std::string phone;

public:
	static int MaxId;

	TimirbaevCourier() {
		id = ++MaxId;;
		//std::cout << "Вызван конструктор класса TimirbaevCourier." << std::endl;
	}

	virtual void CreateCourier(std::istream& in);
	virtual void ShowCourier(std::ostream& out);

	template<class Archive>
	void serialize(Archive& ar, const unsigned int version) {
		ar& id;
		ar& firstname;
		ar& surname;
		ar& age;
		ar& phone;
	}

	~TimirbaevCourier() {
		//std::cout << "Вызван деструктор класса TimirbaevCourier." << std::endl;
	}
};