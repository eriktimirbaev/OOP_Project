#ifndef TIMIRBAEVPARK_H
#define TIMIRBAEVPARK_H

#pragma once
#include "timirbaevcourier.h"
#include "timirbaevautocourier.h"
#include "timirbaevutilities.h"

#include <QFileDialog>
#include <QMessageBox>
#include <vector>

#include <boost/archive/text_iarchive.hpp>
#include <boost/archive/text_oarchive.hpp>
#include <boost/serialization/export.hpp>
#include <boost/serialization/base_object.hpp>
#include <boost/serialization/vector.hpp>
#include <boost/serialization/string.hpp>
#include <boost/serialization/version.hpp>
#include <boost/serialization/split_member.hpp>
#include <boost/serialization/shared_ptr.hpp>

class TimirbaevPark {
private:
    std::vector<std::shared_ptr<TimirbaevCourier>> couriers;

public:
    void AddCourier();
    void AddAutoCourier();
    void DeleteCouriers();
    void SaveSer();
    void LoadSer();
    std::vector<std::shared_ptr<TimirbaevCourier>>& GetCouriers();

    ~TimirbaevPark() {
        DeleteCouriers();
    }
};

#endif // TIMIRBAEVPARK_H
