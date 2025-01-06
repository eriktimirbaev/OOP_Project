#ifndef TIMIRBAEVAUTOCOURIER_H
#define TIMIRBAEVAUTOCOURIER_H

#pragma once
#include "timirbaevcourier.h"
#include <boost/serialization/base_object.hpp>

class TimirbaevAutoCourier : public TimirbaevCourier {
private:
    std::string car_model;
    std::string car_number;

public:
    TimirbaevAutoCourier() : TimirbaevCourier() {}

    void CreateCourier(std::istream& in) override;
    void ShowCourier(QPainter& painter, int& i) const override;

    template<class Archive>
    void serialize(Archive& ar, const unsigned int version) {
        ar & boost::serialization::base_object<TimirbaevCourier>(*this);
        ar & car_model;
        ar & car_number;
    }

    ~TimirbaevAutoCourier() {}
};

#endif // TIMIRBAEVAUTOCOURIER_H
