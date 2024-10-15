#pragma once
#include "TimirbaevCourier.h"
#include <boost/serialization/base_object.hpp>

class TimirbaevAutoCourier : public TimirbaevCourier
{
private:
	std::string car_model;
	std::string car_number;

public:

	TimirbaevAutoCourier() : TimirbaevCourier() {
		//std::cout << "Вызван конструктор класса TimirbaevAutoCourier." << std::endl;
	}

	void CreateCourier(std::istream& in) override;
	void ShowCourier(std::ostream& out) override; 

	template<class Archive>
	void serialize(Archive& ar, const unsigned int version) {
		ar& boost::serialization::base_object<TimirbaevCourier>(*this);
		ar& car_model;
		ar& car_number;
	}

	~TimirbaevAutoCourier() {
		//std::cout << "Вызван деструктор класса TimirbaevAutoCourier." << std::endl;
	}
};