#pragma once
#include <vector>
#include "TimirbaevAutoCourier.h"
#include "TimirbaevCourier.h"
#include "TimirbaevUtilities.h"

class TimirbaevPark
{
private:
	std::vector<std::shared_ptr<TimirbaevCourier>> couriers;

public:
	void AddCourier();
 	void AddAutoCourier();
	void DeleteCouriers();
	//void Save();
	//void Dowloand();

	friend std::ostream& operator << (std::ostream& out, TimirbaevPark& g);

	~TimirbaevPark() {
		DeleteCouriers();
		//std::cout << "Вызван деструктор контейнерного класса." << std::endl;
	}
};