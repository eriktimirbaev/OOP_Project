#ifndef TIMIRBAEVCOURIER_H
#define TIMIRBAEVCOURIER_H

#pragma once
#include "timirbaevutilities.h"

#include <fstream>
#include <QPainter>

class TimirbaevCourier {
private:
    int id;
    std::string firstname;
    std::string surname;
    int age;
    std::string phone;

public:
    static int MaxId;

    TimirbaevCourier() {
        id = ++MaxId;
    }

    virtual void CreateCourier(std::istream& in);
    virtual void ShowCourier(QPainter& painter, int& i) const;

    template<class Archive>
    void serialize(Archive& ar, const unsigned int version) {
        ar & id;
        ar & firstname;
        ar & surname;
        ar & age;
        ar & phone;
    }

    ~TimirbaevCourier() {}
};

#endif // TIMIRBAEVCOURIER_H
