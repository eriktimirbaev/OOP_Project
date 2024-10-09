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

	TimirbaevCourier(std::string firstname, std::string surname, int age, std::string phone) {
		this->id = ++MaxId;;
		this->firstname = firstname;
		this->surname = surname;
		this->age = age;
		this->phone = phone;
		//std::cout << "Вызван конструктор класса TimirbaevCourier." << std::endl;
	}

	virtual void CreateCourier(std::istream& in);
	virtual void ShowCourier(std::ostream& out);


	~TimirbaevCourier() {
		//std::cout << "Вызван деструктор класса TimirbaevCourier." << std::endl;
	}
};