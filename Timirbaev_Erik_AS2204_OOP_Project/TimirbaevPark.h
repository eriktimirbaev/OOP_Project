#pragma once
#include <vector>
#include "TimirbaevAutoCourier.h"
#include "TimirbaevCourier.h"
#include "TimirbaevUtilities.h"

#include <boost/archive/text_iarchive.hpp>
#include <boost/archive/text_oarchive.hpp>
#include <boost/serialization/export.hpp>
#include <boost/serialization/base_object.hpp>
#include <boost/serialization/vector.hpp>
#include <boost/serialization/string.hpp>
#include <boost/serialization/version.hpp>
#include <boost/serialization/split_member.hpp>
#include <boost/serialization/shared_ptr.hpp>

class TimirbaevPark
{
private:
	std::vector<std::shared_ptr<TimirbaevCourier>> couriers;

public:
	void AddCourier();
 	void AddAutoCourier();
	void DeleteCouriers();
	void SaveSer();
	void LoadSer();

	friend std::ostream& operator << (std::ostream& out, TimirbaevPark& g);

	~TimirbaevPark() {
		DeleteCouriers();
		//std::cout << "Вызван деструктор контейнерного класса." << std::endl;
	}
};