#pragma once
#include "TimirbaevCourier.h"

class TimirbaevAutoCourier : public TimirbaevCourier
{
private:
	std::string car_model;
	std::string car_number;

public:

	TimirbaevAutoCourier(std::string firstname, std::string surname, int age, std::string phone, std::string car_model, std::string car_number) : TimirbaevCourier(firstname, surname, age, phone) {
		this->car_model = car_model;
		this->car_number = car_number;
		//std::cout << "Вызван конструктор класса TimirbaevAutoCourier." << std::endl;
	}

	void CreateCourier(std::istream& in) override;
	void ShowCourier(std::ostream& out) override; 

	~TimirbaevAutoCourier() {
		//std::cout << "Вызван деструктор класса TimirbaevAutoCourier." << std::endl;
	}
};