#pragma once
#include "TimirbaevCourier.h"
#include "TimirbaevUtilities.h"
#include <vector>

class TimirbaevPark
{
private:
	std::vector<TimirbaevCourier*> couriers;

public:
	void AddCourier();
 	void ViewCouriers();
	void DeleteCouriers();
	void Save();
	void Dowloand();

	~TimirbaevPark() {
		DeleteCouriers();
		//std::cout << "Вызван деструктор контейнерного класса." << std::endl;
	}
};